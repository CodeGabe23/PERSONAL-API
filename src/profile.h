#pragma once

#include <unordered_map>
#include "json.hpp"

using json = nlohmann::json;

class Profile
{
private:
  std::string API_KEY;

public:
  std::string username;

  unsigned short totalWorkouts;
  float weight_kg;
  std::string recentWorkout; // TODO: fix


  // returns -1 on failure
  int getWorkoutCount()
  {
    std::string url {"https://api.hevyapp.com/v1/workouts/count"};

    cpr::Response r = cpr::Get(
        cpr::Url{url},
        cpr::Header{
          {"api-key", API_KEY},
          {"accept", "application/json"}
          }
        );

    if (r.status_code = 200)
    {
      json data = json::parse(r.text);

      totalWorkouts = data["workout_count"];
      
      return totalWorkouts;
    }
    
    std::cout << "ERROR: status code: " << r.status_code << std::endl;
    return -1;
  }

  int getUsername()
  {
    std::string url {"https://api.hevyapp.com/v1/user/info"};
    
    cpr::Response r = cpr::Get(
        cpr::Url{url},
        cpr::Header{
          {"api-key", API_KEY},
          {"accept", "application/json"}
          }
        );

    if (r.status_code == 200)
    {
      json data = json::parse(r.text);

      username = data["data"]["username"];
      return 0;
    }

    std::cout << "ERROR: status code: " << r.status_code << std::endl;
    return -1;
  }


  // returns -1 on failure
  float getWeight()
  {
    std::string url {"https://api.hevyapp.com/v1/body_measurements?page=1&pageSize=1"};
    
    cpr::Response r = cpr::Get(
        cpr::Url{url},
        cpr::Header{
          {"api-key", API_KEY},
          {"accept", "application/json"}
          }
        );

    if (r.status_code == 200)
    {
      json data = json::parse(r.text);

      weight_kg = data["body_measurements"][0]["weight_kg"];
      return weight_kg;
    }

    std::cout << "ERROR: status code: " << r.status_code << std::endl;
    return -1;
  }


  std::string greetUser()
  {
    std::string userInput;

    std::cout << "What would you like to see next?" << std::endl;

    sleep(1);
    std::cout << "1. Total Workouts Done" << std::endl;
    sleep(1);
    std::cout << "2. Current weight (kg)" << std::endl;
    sleep(1);
    std::cout << "3. Exit application" << std::endl;
    std::cout << "Enter your choice: ";

    std::cin >> userInput;
    
    return userInput;
  }


  void loop()
  {
    while (true)
    {
      std::string userInput = greetUser();
      

      if (userInput == "3") return;

      else if (userInput == "1") 
      {
        std::cout << "Your have finished '" << totalWorkouts << "' workouts total! Well done :)\n";
      }

      else if (userInput == "2")
      {
        std::cout << "Your current weight is: " << weight_kg << "kg\n";
      }

      std::cout << std::endl << std::endl;
    }
  }


  Profile(std::string& _API_KEY)
  {
    API_KEY = _API_KEY;
  
    // fill in Profile data
    getWorkoutCount();
    getWeight();
    getUsername();

    std::cout << "Welcome, " << username << ".\n" << std::endl;
  }

};
