#include <iostream>
#include <Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float notebook_price, cover_price;
	int order_count;

	std::cout << "������ �������� ���: " << std::endl;
	std::cout << "ֳ�� ������: ";
	std::cin >> notebook_price;
	std::cout << "ֳ�� ����������: ";
	std::cin >> cover_price;

	std::cout << "ʳ������ ���������: ";
	std::cin >> order_count;

	float result = (notebook_price + cover_price) * order_count;
	std::cout << "������� �������: " << result << " ���" << std::endl;
	return 0;
}
