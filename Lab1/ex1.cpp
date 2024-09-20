#include <iostream>
#include <cmath>

inline static float func(float x) {
	return (x*x - x + 1) / sqrt(pow(x,3) + 4);
}

int main()
{
	float x;

	std::cout << "Input x: ";
	std::cin >> x;

	float result = func(x);
	std::cout << "result: " << result << std::endl;
	return 0;
}
