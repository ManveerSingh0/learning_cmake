#include <iostream>
#include "my_lib.h"
#include "config.hpp"


int main(){
  std::cout << project_name << '\n' << project_version << std::endl;
  My_lib object;
  object.say_hello();
  return 0;
}
