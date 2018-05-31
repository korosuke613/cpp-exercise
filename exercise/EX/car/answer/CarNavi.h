#ifndef _CARNAVI_H_
#define _CARNAVI_H_

#include <string>
#include <vector>

class CarNavi {
 public:
  CarNavi() = default;
  std::vector<std::string> search_root(std::string current_position,
                                       std::string destination);
};

#endif
