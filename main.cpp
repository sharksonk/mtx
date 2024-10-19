#include <iostream>
#include "matrix.hpp"
int main() {
  size_t m = 0, n = 0;
  std::cin >>  m >> n;
  if (!std::cin) {
    std::cerr << "Not a number\n"
    return 1;
  }
  int** t  = nullptr;
  try {
    t = creatematrix(m,n);
  } catch (const std::bad_alloc & e) {
    std::cerr << "Out of memory\n";
    return 1;
  }
  inm(t, m, n);
  if (!std::cin) {
    std::cerr << "Not a number\n";
    return 1;
  }
  outm(t, m, n);
  destroy(t, m);
}
