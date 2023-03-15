#include <iostream>

#include "myfunctions.hpp"

int main() {
	int ans = root(74088, 3);
	assert(ans == 42);
	std::cout << "The answer is " << ans << std::endl;
	return 0;
}

