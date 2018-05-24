#ifndef __BOOK_H_
#define __BOOK_H_

#include <string>
#include "Price.h"

class Book {
 private:
  std::string title;
  Price price;

 public:
  Book() = default;
  explicit Book(std::string title_, Price price_)
      : title(title_), price(price_) {}
  std::string getTitle();
  int getNumber(int total);
};

#endif