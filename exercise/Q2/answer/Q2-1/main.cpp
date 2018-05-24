#include "Book.h"
#include <iostream>

int main() {
  Book b("宮地本", 980);
  std::cout << b.getTitle() << std::endl;
  std::cout << "個数は" << b.getNumber(4900) << "個" << std::endl;

  return 0;
}