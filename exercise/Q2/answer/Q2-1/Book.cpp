#include "Book.h"

std::string Book::getTitle() { return title; }
int Book::getNumber(int total){
  return total / price;
}