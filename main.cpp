#include <iostream>
int** create(size_t m, size_t n);
void destroy(size_t m, size_t n);
int main() {
  size_t m = 0, n = 0;
  std::cin >>  m >> n;
  int **t = create (m, n);
}
