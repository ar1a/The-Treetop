#ifndef __UTILS_hpp
#define __UTILS_hpp

#include <algorithm>
#include <sstream>
#include <vector>

namespace utils {

  template<typename C, typename T>
  bool contains(const C& v, const T& x)
  {
    return std::find(std::begin(v), std::end(v), x) != std::end(v);
  }

  std::vector<std::string> split(const std::string& str, char c)
  {
    std::vector<std::string> list;
    std::stringstream ss{str};
    std::string temp;

    while(std::getline(ss, temp, c)) {
      list.emplace_back(std::move(temp));
    }

    return list;
  }

}

#endif //__UTILS_hpp
