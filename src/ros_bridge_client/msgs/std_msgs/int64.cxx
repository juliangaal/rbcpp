//
// Created by julian on 18.11.18.
//

#include <ros_bridge_client/msgs/std_msgs/int64.h>

using namespace ros_bridge_client::msgs::std_msgs;

Int64::Int64()
  : StdMsg("std_msgs/Int64")
{}

Int64::Int64(int64_t data)
  : StdMsg(data, "std_msgs/Int64")
{}
