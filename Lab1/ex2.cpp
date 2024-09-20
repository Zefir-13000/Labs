#include <iostream>
#include <Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float notebook_price, cover_price;
	int order_count;

	std::cout << "Введіть початкові дані: " << std::endl;
	std::cout << "Ціна зошита: ";
	std::cin >> notebook_price;
	std::cout << "Ціна обкладинки: ";
	std::cin >> cover_price;

	std::cout << "Кількість комплектів: ";
	std::cin >> order_count;

	float result = (notebook_price + cover_price) * order_count;
	std::cout << "Вартість покупки: " << result << " грн" << std::endl;
	return 0;
}
