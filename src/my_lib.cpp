#include <iostream>
#include "my_lib.h"
#include "config.hpp"
#include "nlohmann/json.hpp"


void My_lib::say_hello(){
  std::cout << "Hello World" << std::endl;


  std::cout << "JSON Lib VERSION: " << NLOHMANN_JSON_VERSION_MAJOR << std::endl;
  std::cout << project_name << std::endl;
  std::cout << project_version_major << " " << project_version_minor << " " << project_version_patch << std::endl;
}
