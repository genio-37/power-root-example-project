#include "myfunctions.hpp"

int power(int x, int y) {
	assert( y >= 0);
	int result = 1;
	for (int i = 0; i < y; ++i) result *= x;
	return result;
}
