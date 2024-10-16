#include <iostream>
int** create(size_t M, size_t N);
void destroy(size_t M, size_t N);
int main() {
	size_t M = 0, N = 0;
	std::cin >>  M >> N;
	int **t = create (M, N);
}
