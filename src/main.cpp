// --------------------------------------------------
//
//                Gabe's Personal API System
//               ============================
//    This displays my health data related to Gym and Calisthenics
//    and other interesting pieces of data within my life. 
//
//    Note: this system can technically be used by other people
//          if they use the same apps as me (e.g. Hevy for Gym)
//
// --------------------------------------------------
// ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⣤⣤⣤⣴⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣦⣤⣤⣤⣀⣄⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
// ⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⣿⣿⣿⣿⣿⢿⣟⣛⣭⡽⠶⠶⠶⠮⠭⠭⣭⣭⣭⣭⣭⣭⣭⣿⣿⣯⣭⣥⣄⣀⣀⠀⠀⠀⠀⠀⠀⠀⠀
// ⠀⠀⠀⠀⠀⠀⠀⠀⣰⣿⣿⣿⣿⢟⣫⣶⠿⣫⣭⣶⠿⠿⣿⣿⣿⠿⢿⣷⣶⣮⣭⣭⣭⣭⣭⣷⣶⣶⣶⣾⣽⣿⣷⣦⡀⠀⠀⠀⠀⠀
// ⠀⠀⠀⠀⠀⠀⠀⣸⣿⣿⣿⣫⣾⣟⣩⣞⣫⣵⣿⣿⣿⣿⣿⣿⣿⣯⢻⣿⣿⣿⣿⣿⣿⢻⣿⣿⣿⣿⣶⣍⡻⣿⣿⣿⣷⠀⠀⠀⠀⠀
// ⠀⠀⠀⠀⠀⠀⣴⣿⣿⣿⣿⣿⣿⣿⣵⣿⡿⠿⠛⠛⠛⠛⠿⣿⣿⣿⡇⣿⣿⣿⣿⣿⣣⣿⣿⣿⣿⠿⢿⣿⣷⣼⣿⣿⣿⣇⠀⠀⠀⠀
// ⠀⠀⠀⠀⢀⣚⣯⣽⣿⣿⣿⣿⢻⣿⣏⡅⠀⠀⠀⠀⠀⠠⣿⣷⣯⡛⣿⣿⣿⣿⣿⣿⡿⠟⠉⠁⠐⣿⣿⣶⣽⣿⣟⣛⡻⠿⣦⡀⠀⠀
// ⠀⢀⣴⣞⣯⣷⠶⣒⣛⣛⡻⢿⣷⣿⣷⣾⣶⣾⢟⣿⣿⣿⣶⣯⣟⣫⣿⣿⣿⣿⣿⣍⠀⣀⣤⣤⣬⣭⣽⣿⣿⣿⣿⣿⣿⣟⢶⡝⣦⠀
// ⠀⣿⡿⣾⣿⣵⣿⣿⣿⣿⣿⣷⣾⣭⣽⣿⣭⣵⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢸⣿⣿⣿⣿⣿⡿⠿⢟⣫⣭⣭⣽⣿⣷⣿⢸⠀
// ⠀⣿⡇⣿⣿⣿⡿⠿⢟⣴⣬⣛⠿⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣻⣿⣿⣿⣿⣿⣿⣷⣝⣛⢿⣿⣿⣿⣿⣿⣿⡟⣿⣿⣿⢟⣿⢸⠀
// ⠀⢿⣧⣿⣿⣿⣿⣿⣧⢻⣿⣿⣿⣷⣮⢙⡻⠿⣿⣿⣯⣭⣾⡇⣿⣿⣟⣭⣻⣿⣿⣿⣿⣿⡿⣸⣿⠿⢿⣿⣿⡿⡁⢹⣿⣷⢿⣱⠇⠀
// ⠀⠀⠻⢷⣝⣿⣿⣿⣿⣧⠉⠻⢿⣿⣿⢸⣿⣿⣷⣶⣭⣝⢛⠿⢿⣿⣿⣿⣿⣿⣯⣙⣛⣭⣾⣿⣿⣿⣿⠿⡋⣾⣿⡈⣿⣿⣿⡏⠀⠀
// ⠀⠀⠀⠀⠸⣽⣿⣿⣿⣿⣷⡽⣿⣷⣆⢘⠿⣿⣿⣿⣿⣿⢸⣿⣿⣶⣶⣶⡎⣭⣭⣭⣭⡩⣭⣭⣽⣦⣰⣿⣧⢿⣿⡇⣿⣿⣿⠀⠀⠀
// ⠀⠀⠀⠀⠀⠘⣿⣿⣿⣿⣿⣿⣮⣻⣏⣿⣿⣾⣯⣍⠛⠋⠻⢿⣿⣿⣿⣿⡇⣿⣿⣿⣿⡇⣿⣿⣿⣿⡟⣿⠟⠈⠉⠀⣿⣿⡏⠀⠀⠀
// ⠀⠀⠀⠀⠀⠀⠘⣿⣿⣿⣿⣿⣿⣿⣾⡿⣿⣿⣿⣿⣿⢦⣴⣦⣬⣍⡛⠛⠈⠛⠛⠛⠛⠁⠙⠛⠛⠉⠀⠀⠀⠀⢠⡆⣿⣿⡇⠀⠀⠀
// ⠀⠀⠀⠀⠀⠀⠀⠘⢿⣿⣿⣿⣿⣿⣿⣿⣮⣿⡻⣿⢏⣾⣿⢿⣿⣿⣿⣷⣶⣾⣷⣶⣄⣴⣶⣤⡤⣶⣶⡆⣾⡿⡸⣱⣿⣿⡇⠀⠀⠀
// ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⠿⣷⣝⡻⢶⣽⣻⢿⣿⣷⣭⣝⣻⣿⡿⠿⠿⠏⣿⣿⣿⣿⣿⣿⣿⣿⢿⣿⡿⠱⣿⣃⣵⣿⣿⣿⣧⠀⠀⠀
// ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠻⢿⣶⣝⡻⢷⣮⣝⡻⢿⣿⣿⣿⣿⣿⣿⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣾⣿⣿⡿⣿⣿⣿⣿⣿⡄⠀⠀
// ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠙⠿⢷⣮⣝⡻⢿⣷⣮⣭⣛⣻⠿⠿⣿⣶⣶⣶⣶⣿⣿⣿⠿⢿⣛⣽⣾⣿⡿⣹⣿⣿⡇⠀⠀
// ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠙⠻⢿⣾⣶⣭⣽⣛⣛⠿⠿⠶⢶⣶⣶⣶⣶⡿⠿⠿⢟⣛⣭⣷⣿⣿⣿⣿⠇⠀⠀
// ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠉⠛⠻⠿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠏⠀⠀⠀
// ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠉⠉⠉⠛⠛⠛⠛⠿⠿⠛⠛⠛⠉⠁⠀⠀⠀⠀⠀

#define SCREEN_WIDTH 800
#define SCREEN_HEIGHT 450

// STD stuff
#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>
#include <unistd.h>

// External dependencies 
#include <cpr/cpr.h>
#include "dotenv.h" // for retreiving my Hevy API 
#include "raylib/src/raylib.h"

// My API System
#include "profile.h"

// Globals
std::string API_KEY;


// run once
void setup()
{
  dotenv env(".env");
  API_KEY = env.get("API_KEY");
}

void guiLoop()
{
  
}


// driver
int main () 
{
  // init
  setup();
  Profile profile(API_KEY);
  InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Gabriel's Personal API System");
  SetTargetFPS(60);

  // main loop
  profile.loop();
  
  while (!WindowShouldClose())
  {
    BeginDrawing();
      ClearBackground(RAYWHITE);
    EndDrawing();
  }

  // exit 
  std::cout << "\n\nSee you next time, " << profile.username << "\n\n";
  return 0;
}
