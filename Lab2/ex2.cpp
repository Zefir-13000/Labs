#include <iostream>
#include <cstdint>
#include <stdfloat>
#include <Windows.h>

constexpr auto A_prc = 0.10;
constexpr auto B_prc = 0.15;
constexpr auto V_prc = 0.20;


// |sin(x)/3,124 - cos(x^2)| - 8,3*sin(3x)
inline static float_t func4(float_t x) {
	return fabs(sin(x)/3.124 - cos(x*x)) - 8.3 * sin(3*x);
}

// |cos(2x)|/1,12 - cos(3x - 2) + 6,15
inline static float_t func5(float_t x) {
	return fabs(cos(2*x)) / 1.12 - cos(3*x - 2) + 6.15;
}

// sin(x)*cos^2(x) * sin(x + 1,4) / 0,85 + 7,14
inline static float_t func6(float_t x) {
	return sin(x) * pow(cos(x), 2) * sin(x + 1.4) / 0.85 + 7.14;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float_t x;
	int8_t work_type;

	std::cout << "Введіть тип робіт (А, Б, В): ";
	std::cin >> work_type;

	std::cout << "Введіть x: ";
	std::cin >> x;

	
	float_t Y, fee;
	if (work_type == 'А') {
		Y = 100 * fabs(func4(x) + 50);
		fee = Y * A_prc;
	}
	else if (work_type == 'Б') {
		Y = 150 * fabs(func5(x) + 100);
		fee = Y * B_prc;
	}
	else if (work_type == 'В') {
		Y = 100 * fabs(func6(x) + 135);
		fee = Y * V_prc;
	}
	else {
		throw std::runtime_error("Неправильний тип робіт!");
		return 1;
	}
	
	if (work_type == 'А') {
		Y = 100 * fabs(func4(x) + 50);
		fee = Y * A_prc;
	}
	if (work_type == 'Б') {
		Y = 150 * fabs(func5(x) + 100);
		fee = Y * B_prc;
	}
	if (work_type == 'В') {
		Y = 100 * fabs(func6(x) + 135);
		fee = Y * V_prc;
	}

	std::cout << "Нарахована сума: " << Y << std::endl;
	std::cout << "Сума податку: " << fee << std::endl;
	std::cout << "Сума до видачі: " << Y - fee << std::endl;
	return 0;
}
