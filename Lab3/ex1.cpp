#include <iostream>
#include <cstdint>

inline static float func(uint32_t k) {
	return 1.0f / (k * pow(2 * k + 1, 2));
}

int main() {
	
	uint32_t n;
	std::cout << "Enter n: ";
	std::cin >> n;

	float sum = 0;
	for (uint32_t k = 1; k < n; ++k) {
		sum += func(k);
	}

	std::cout << "Sum: " << sum << std::endl;

	return 0;
}