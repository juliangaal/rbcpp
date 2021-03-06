//
// Created by julian on 22.11.18.
//

#include <rbc/msgs/std_msgs/color_rgba.h>
#include <rbc/utils/deserializer.h>
#include <tuple>

using namespace rbc::msgs::std_msgs;

ColorRGBA::ColorRGBA()
  : ROSTypeBase("std_msgs/ColorRGBA"),
    r(0), g(0), b(0), a(1)
{}

ColorRGBA::ColorRGBA(float r, float g, float b, float a)
  : ROSTypeBase("std_msgs/ColorRGBA"),
    r(r), g(g), b(b), a(a)
{}

ColorRGBA::ColorRGBA(const web::json::value &response)
  : ROSTypeBase("std_msgs/ColorRGBA"),
    r(0), g(0), b(0), a(0)
{
  utils::Deserializer::deserialize(*this, response, false);
}

std::ostream &rbc::msgs::std_msgs::operator<<(std::ostream &os, const ColorRGBA &c)
{
  os << "\nColorRGBA:";
  os << "\n\tr: " << c.r;
  os << "\n\tg: " << c.g;
  os << "\n\tb: " << c.b;
  os << "\n\ta: " << c.a;
  return os;
}

std::ostream &rbc::msgs::std_msgs::operator<<(std::ostream &os, const std::shared_ptr<ColorRGBA> &c)
{
  return os << *c.get();
}
