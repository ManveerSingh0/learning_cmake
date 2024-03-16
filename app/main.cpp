#include <iostream>
#include "my_lib.h"
#include "config.hpp"
#include "nlohmann/json.hpp"


int main(){
  My_lib object;
  object.say_hello();

  std::cout << "JSON Lib VERSION: " << NLOHMANN_JSON_VERSION_MAJOR << std::endl;

  std::cout << project_name << std::endl;
  std::cout << project_version_major << " " << project_version_minor << " " << project_version_patch << std::endl;
  return 0;
}
