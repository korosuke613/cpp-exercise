#ifndef __CAT_H_
#define __CAT_H_

#include "Animal.h"

#include <iostream>
#include <string>

class Cat : public Animal {
 public:
  Cat() : Animal() {}
  explicit Cat(std::string name_) : Animal(name_) {}
  void cry();
};

#endif