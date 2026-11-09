#pragma once

#include <unordered_map>

struct Profile
{
  unsigned short totalWorkouts;
  std::unordered_map<std::string, float> body_measurements;
};
