#include <iostream>
#include <cmath>

#define PI 3.14159265358979323846

inline static float func(float x) {
	constexpr float a = 0.8f * PI;
	if (x < 0) {
		return x * x + 1;
	}
	else if (x > 1.4f) {
		return x - 2.1f;
	}
	return cos(a * x);
}

int main()
{
	float x;

	std::cout << "Input x: ";
	std::cin >> x;

	float result = func(x);
	std::cout << "result y: " << result << std::endl;
	return 0;
}
