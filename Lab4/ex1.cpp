#include <iostream>
#include <cstdint>
#include <limits>

static uint32_t factorial(uint32_t n) {
	return n == 0 ? 1 : n * factorial(n - 1);
}

static float set_precision(float f, uint32_t _precision)
{
	float n = std::pow(10.0f, _precision);
	return std::round(f * n) / n;
}

int main() {
	float sum = 0;
	float precision = 0.0001f;

	uint32_t n = 0;
	float x;
	std::cout << "Enter x: ";
	std::cin >> x;

	float temp = std::numeric_limits<float>::infinity();
	while (fabs(temp) > precision) {
		temp = pow(-1, n) * (pow(x, 2 * n) / factorial(2 * n));
		sum += temp;
		++n;
	}

	std::cout << "Sum: " << set_precision(sum, 4) << std::endl;
	return 0;
}