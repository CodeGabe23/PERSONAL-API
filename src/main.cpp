#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>
#include <unordered_map>

// External dependencies 
#include <cpr/cpr.h>
#include "json.hpp"
#include "dotenv.h" // for retreiving my Hevy API key
                    
using json = nlohmann::json;

// TESTING: 
// currently just trying to get the total workouts and print it thats all.

int getWorkoutCount(std::string& api_key)
{
  std::string url {"https://api.hevyapp.com/v1/workouts/count"};
  int totalWorkouts{};

  cpr::Response r = cpr::Get(
      cpr::Url{"https://api.hevyapp.com/v1/workouts/count"},
      cpr::Header{
        {"api-key", api_key},
        {"accept", "application/json"}
        }
      );

  if (r.status_code = 200)
  {
    json data = json::parse(r.text);

    totalWorkouts = data["workout_count"];

    std::cout << "INFO: workout_count = " << totalWorkouts << std::endl;
    return totalWorkouts;
  }
  
  std::cout << "ERROR: status code: " << r.status_code << std::endl;
  return -1;
}


int main () {

  dotenv env(".env");

  std::string api_key = env.get("API_KEY");
  
  std::cout << getWorkoutCount(api_key) << "\n";


  return 0;
}
