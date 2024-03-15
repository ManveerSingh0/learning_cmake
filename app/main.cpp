#include <iostream>
#include "my_lib.h"
#include "config.hpp"



int main(){
  // My_lib object;
  // object.say_hello();


  std::cout << project_version << " " << project_name << std::endl;
  std::cout << project_version_major << " " << project_version_minor << " " << project_version_patch << std::endl;
  return 0;
}
