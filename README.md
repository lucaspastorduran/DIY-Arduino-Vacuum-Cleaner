# DIY - Arduino based Vacuum Cleaner Robot

This is a starter repo for doing a home version of Vacuum Cleaner using Arduino platform.

## Hardware Overview
* cmake >= 3.7
  * All OSes: [click here for installation instructions](https://cmake.org/install/)
* make >= 4.1 (Linux, Mac), 3.81 (Windows)
  * Linux: make is installed by default on most Linux distros
  * Mac: [install Xcode command line tools to get make](https://developer.apple.com/xcode/features/)
  * Windows: [Click here for installation instructions](http://gnuwin32.sourceforge.net/packages/make.htm)
* SDL2 >= 2.0
  * All installation instructions can be found [here](https://wiki.libsdl.org/Installation)
  * Note that for Linux, an `apt` or `apt-get` installation is preferred to building from source.
* gcc/g++ >= 5.4
  * Linux: gcc / g++ is installed by default on most Linux distros
  * Mac: same deal as make - [install Xcode command line tools](https://developer.apple.com/xcode/features/)
  * Windows: recommend using [MinGW](http://www.mingw.org/)

## Basic Build Instructions
1. Clone this repo.
2. Go to /src/main
3. Open "main.ino" with Arduino IDE.

## Features
* The user can select a level of difficulty from 1 to 5. The more difficulty, the more the snake speed increases and more points earns for eating food. [commit](https://github.com/lucaspastorduran/CppND-Capstone-Snake-Game/commit/efe02bd2192f236c80508c13fdfb1db822c95ba0)
* Snake speed is defined as private member in Snake, so Game must use "IncreaseSpeed" method to update its value. In that way, snake also controls its maximum speed set to 0.95. [commit](https://github.com/lucaspastorduran/CppND-Capstone-Snake-Game/commit/8a368253ebade78f06bd8a87ebbda8d94a67795e)
* Composition: Snake class is allocated in heap as a smart pointer inside Game class: [commit](https://github.com/lucaspastorduran/CppND-Capstone-Snake-Game/commit/ca23bdc6643ceb37782a597ca89b52b3498b4bf2)
* Composition: Conroller class is allocated in heap as a smart pointer inside Game class: [commit](https://github.com/lucaspastorduran/CppND-Capstone-Snake-Game/commit/ca23bdc6643ceb37782a597ca89b52b3498b4bf2)
* Memory Management: SDL_WIindow and SDL_Renderer are stored as unique_ptr's inside Renderer: [commit](https://github.com/lucaspastorduran/CppND-Capstone-Snake-Game/commit/31ed09fca1da8af03fa67591531c792c28dde0c1)

