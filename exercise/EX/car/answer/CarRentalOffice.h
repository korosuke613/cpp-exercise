#ifndef _RENTALOFFICE_H_
#define _RENTALOFFICE_H_

#include "Car.h"
#include "Impreza.h"
#include "Prius.h"

class CarRentalOffice {
 public:
  Car* arrange(int num) {
    Car *car;
    switch (num) {
      case 1:
        car = new Prius{};
        break;
      case 2:
        car = new Impreza{};
        break;
    };
    return car;
  }
};

#endif