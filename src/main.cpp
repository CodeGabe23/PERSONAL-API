#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>
#include <unordered_map>
#include <cpr/cpr.h>

#include "dotenv.h" // for retreiving my Hevy API key

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

  return 1;
}


int main () {

  dotenv env(".env");

  std::string api_key = env.get("API_KEY");
  
  std::cout << getWorkoutCount(api_key);


  return 0;
}
