#include "Cat.h"
#include "Dog.h"

int main() {
  Dog dog = Dog("ミヤジ");
  Cat cat = Cat("猫ミヤジ");

  dog.cry();
  cat.cry();

  return 0;
}