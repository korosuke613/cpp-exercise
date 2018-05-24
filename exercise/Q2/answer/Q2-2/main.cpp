#include "Price.h"
#include "Book.h"
#include <iostream>

int main() {
  Price price(980);
  Book b("宮地本", price);
  std::cout << b.getTitle() << std::endl;
  std::cout << "個数は" << b.getNumber(9800) << "個" << std::endl;

  return 0;
}