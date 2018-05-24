#ifndef __BOOK_H_
#define __BOOK_H_

#include <string>

class Book {
 private:
  std::string title;
  int price;

 public:
  Book() = default;
  explicit Book(std::string title_, int price_)
      : title(title_), price(price_) {}
  std::string getTitle();
  int getNumber(int total);
};

#endif