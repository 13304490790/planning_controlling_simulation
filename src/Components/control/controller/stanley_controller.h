#ifndef STANLEY_CONTROLLER_H_
#define STANLEY_CONTROLLER_H_

#define FLAGS_enable_csv_debug true

#include "common/proto/vehicle_config.pb.h"
#include "control/control/pid_controller.h"
#include "control/control/status.h"
#include "control/control/trajectory_analyzer.h"
#include "control/filters/digital_filter.h"
#include "control/filters/digital_filter_coefficients.h"
#include "control/filters/mean_filter.h"
#include "controller.h"

class StanleyController : public Controller {
 public:
  StanleyController();
  virtual ~StanleyController();

  /**
   * @brief initialize Longitudinal Controller
   * @param control_conf control configurations
   * @return Status initialization status
   */
  Status Init(std::shared_ptr<DependencyInjector> injector,
              const controller::ControlConf *control_conf) override;

  /**
   * @brief compute brake / throttle values based on current vehicle status
   *        and target trajectory
   * @param localization vehicle location
   * @param chassis vehicle status e.g., speed, acceleration
   * @param trajectory trajectory generated by planning
   * @param cmd control command
   * @return Status computation status
   */
  Status ComputeControlCommand(
      const controller::LocalizationEstimate *localization,
      const canbus::Chassis *chassis, const planning::ADCTrajectory *trajectory,
      controller::ControlCommand *cmd) override;

  /**
   * @brief reset longitudinal controller
   * @return Status reset status
   */
  Status Reset() override;

  /**
   * @brief longitudinal controller name
   * @return string controller name in string
   */
  std::string Name() const override { return "Stanley Controller"; }

  void Stop() override;

  bool get_reached() { return reached_; }
  points::TrajectoryPoint get_target_point() { return target_point_; }

 private:
  void CloseFile();

  void InitializeFilters(const controller::ControlConf *control_conf);

  void GetTargetPoint();

 private:
  FILE *stanley_log_ = nullptr;

  DigitalFilter digital_filter_;

  PIDController station_pid_controller_;
  double dt_ = 0.01;

  double k_;

  const vehicle::VehicleParam vehicle_param_;
  points::TrajectoryPoint target_point_;
  points::PathPoint matched_point_;

  const controller::ControlConf *control_conf_ = nullptr;
  bool reached_;
  TrajectoryAnalyzer trajectory_analyzer_;

  double s_matched_, s_dot_matched_, d_matched_, d_dot_matched_;

  double s_ = 0.0;
  double station_error_ = 0.0;
  double speed_controller_input_limit_ = 0.0;

  const controller::LocalizationEstimate *localization_ = nullptr;
  const canbus::Chassis *chassis_ = nullptr;
  planning::ADCTrajectory trajectory_;

  std::shared_ptr<DependencyInjector> injector_;
};

#endif  // STANLEY_CONTROLLER_H_