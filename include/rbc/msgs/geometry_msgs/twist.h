//
// Created by Julian on 18.09.18.
//

#ifndef ROSBRIDGECLIENT_TWIST_HPP
#define ROSBRIDGECLIENT_TWIST_HPP

#include <cpprest/json.h>
#include <rbc/msgs/geometry_msgs/accel.h>
#include <rbc/msgs/geometry_msgs/vector3.h>
#include <memory>
#include <iostream>
#include "accel.h"

namespace rbc::msgs::geometry_msgs
{

struct Twist : public Accel
{
  Twist();

  Twist(double lx, double ly, double lz, double ax, double ay, double az);

  Twist(const Vector3 &linear, const Vector3 &angular);

  explicit Twist(const web::json::value &response);

  ~Twist() override = default;
};

} // namespace rbc::msgs::geometry_msgs

std::ostream &operator<<(std::ostream &os, const rbc::msgs::geometry_msgs::Twist &p);

std::ostream &
operator<<(std::ostream &os, const std::shared_ptr<rbc::msgs::geometry_msgs::Twist> &p);

#endif //ROSBRIDGECLIENT_TWIST_HPP