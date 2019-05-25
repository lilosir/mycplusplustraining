//
//  main.cpp
//  ARandomProject
//
//  Created by Oliver on 2018-09-10.
//

#include <iostream>

int main() {
  int age;
  std::cout << "input your age" << std::endl;
  std::cin >> age;
  if(age >= 18) {
    std::cout << "OK, " << age <<" is good to go voting!"<< std::endl;
  } else {
    std::cout << "kid, go back to school!" << std::endl;
  }
  return 0;
}
