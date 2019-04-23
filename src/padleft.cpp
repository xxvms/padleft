
#include <padleft.hpp>

namespace pl {

std::string pad_left(const std::string &str, int num_spaces) {

  if (num_spaces < 0) {

    return str;
  } else {

    std::string out(num_spaces, ' ');
    return out + str;
  }
}
} // namespace pl
