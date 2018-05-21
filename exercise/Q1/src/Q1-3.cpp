#include <iostream>

int x = 0;

void func(int x)
{
  x = 1;
}

namespace A {
  int x = 2;
}

int main()
{
  int x = 3;

  std::cout << "1:" << x << std::endl;
  std::cout << "2:" << ::x << std::endl;

  func(x);
  std::cout << "3:" << x << std::endl;

  {
    int x = 4;
    std::cout << "4:" << x << std::endl;
  }

  std::cout << "5:" << x << std::endl;
  std::cout << "6:" << A::x << std::endl;
} 
