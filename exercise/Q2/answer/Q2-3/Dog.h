#ifndef __DOG_H_
#define __DOG_H_

#include "Animal.h"

#include <iostream>
#include <string>

class Dog : public Animal {
 public:
  Dog() : Animal() {}
  explicit Dog(std::string name_) : Animal(name_) {}
  void cry();
};

#endif