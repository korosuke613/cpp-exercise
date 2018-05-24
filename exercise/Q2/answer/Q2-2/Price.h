#ifndef __PRICE_H_
#define __PRICE_H_

class Price {
 private:
  int price;

 public:
  Price() = default;
  explicit Price(int price_) : price(price_) {}
  int getPrice();
};

#endif