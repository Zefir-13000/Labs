#include <iostream>
#include <cstdint>

int main() {

	uint32_t a, b;
	std::cout << "Input a: ";
	std::cin >> a;
	std::cout << "Input b: ";
	std::cin >> b;

	uint64_t sum = 0;
	for (; a < b; ++a) {
		if (a % 2 == 1)
			sum += a*a;
	}

	std::cout << "Sum of squares: " << sum << std::endl;

	return 0;
}