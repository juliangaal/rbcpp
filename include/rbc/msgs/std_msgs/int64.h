//
// Created by julian on 18.11.18.
//

#ifndef ROSBRIDGECLIENT_INT_H
#define ROSBRIDGECLIENT_INT_H

#include <rbc/msgs/std_msgs/std_msg.h>
#include <cpprest/json.h>

namespace rbc::msgs::std_msgs
{

struct Int64 : public StdMsg<int64_t>
{
  Int64();

  explicit Int64(int64_t data);

  explicit Int64(const web::json::value &response);

  ~Int64() final = default;
};

} // namespace rbc::msgs::std_msgs

#endif //ROSBRIDGECLIENT_INT_H
