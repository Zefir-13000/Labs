#include <iostream>
#include <cmath>
#include <Windows.h>

#define A_prc 0.9
#define B_prc 0.85
#define V_prc 0.8


// |sin(x)/3,124 - cos(x^2)| - 8,3*sin(3x)
inline static float func4(float x) {
	return fabs(sin(x)/3.124 - cos(x*x)) - 8.3 * sin(3*x);
}

// |cos(2x)|/1,12 - cos(3x - 2) + 6,15
inline static float func5(float x) {
	return fabs(cos(2*x)) / 1.12 - cos(3*x - 2) + 6.15;
}

// sin(x)*cos^2(x) * sin(x + 1,4) / 0,85 + 7,14
inline static float func6(float x) {
	return sin(x) * pow(cos(x), 2) * sin(x + 1.4) / 0.85 + 7.14;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float x;
	char work_type;

	std::cout << "Введіть тип робіт (А, Б, В): ";
	std::cin >> work_type;

	std::cout << "Введіть x: ";
	std::cin >> x;

	float Y = 0.f;
	if (work_type == 'А') {
		Y = 100 * fabs(func4(x) + 50);
		Y *= A_prc;
	}
	else if (work_type == 'Б') {
		Y = 150 * fabs(func5(x) + 100);
		Y *= B_prc;
	}
	else if (work_type == 'В') {
		Y = 100 * fabs(func6(x) + 135);
		Y *= V_prc;
	}
	else {
		std::cout << "Неправильний тип робіт!" << std::endl;
		return 1;
	}

	std::cout << "result Y: " << Y << std::endl;
	return 0;
}
