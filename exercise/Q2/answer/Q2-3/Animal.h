#ifndef __ANIMAL_H_
#define __ANIMAL_H_

#include <string>

class Animal {
 protected:
  std::string name;

 public:
  Animal() = default;
  explicit Animal(std::string name_) : name(name_) {}
  void cry();
};

#endif