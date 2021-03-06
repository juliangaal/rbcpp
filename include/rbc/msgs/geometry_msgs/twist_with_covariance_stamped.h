//
// Created by julian on 29.11.18.
//

#ifndef ROSBRIDGECLIENT_TWIST_WITH_COVARIANCE_STAMPED_H
#define ROSBRIDGECLIENT_TWIST_WITH_COVARIANCE_STAMPED_H

#include <rbc/msgs/ros_type_base.h>
#include <rbc/msgs/geometry_msgs/twist_with_covariance.h>
#include <rbc/msgs/geometry_msgs/util/covariance.h>
#include <rbc/msgs/std_msgs/header.h>

namespace rbc::msgs::geometry_msgs
{

struct TwistWithCovarianceStamped : public ROSTypeBase
{
  explicit TwistWithCovarianceStamped(std::string frame_id = "world");
  explicit TwistWithCovarianceStamped(const web::json::value &response);
  TwistWithCovarianceStamped(const Vector3 &linear, const Vector3& angular,
                             const std::array<double, 36> &covariance, std::string frame_id);
  TwistWithCovarianceStamped(const Twist &twist, const std::array<double, 36> &covariance, std::string frame_id);
  TwistWithCovarianceStamped(const TwistWithCovariance &twist_cov, std::string frame_id);
  ~TwistWithCovarianceStamped() final = default;

  TwistWithCovariance twist;
  std_msgs::Header header;
};

} // namespace rbc::msgs::geometry_msgs

std::ostream &operator<<(std::ostream &os, const rbc::msgs::geometry_msgs::TwistWithCovarianceStamped &t);

std::ostream &operator<<(std::ostream &os, const std::shared_ptr<rbc::msgs::geometry_msgs::TwistWithCovarianceStamped> &t);

#endif //ROSBRIDGECLIENT_TWIST_WITH_COVARIANCE_STAMPED_H
