#include <iostream>
#include <Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int student_number;
	std::cout << "Введіть номер студента: ";
	std::cin >> student_number;

	if (student_number <= 0 || student_number > 25) {
		std::cout << "Некорректний номер студента.";
		return 1;
	}
	
    switch(student_number) {
        case 1:
            std::cout << "Авдєєв Єгор Сергійович";
            break;
        case 2:
            std::cout << "Вареников Даніїл Родіонович";
            break;
        case 3:
            std::cout << "Гаврилюк Артем Валентинович";
            break;
        case 4:
            std::cout << "Гладченко Анастасія Вікторівна";
            break;
        case 5:
            std::cout << "Гонтаренко Олексій Владиславович";
            break;
        case 6:
            std::cout << "Джос Євгенія Володимирівна";
            break;
        case 7:
            std::cout << "Заруднєв Володимир Олександрович";
            break;
        case 8:
            std::cout << "Іваницький Дмитро Олександрович";
            break;
        case 9:
            std::cout << "Ковтун Максим Віталійович";
            break;
        case 10:
            std::cout << "Коряк Давид Русланович";
            break;
        case 11:
            std::cout << "Куча Євген Юрійович";
            break;
        case 12:
            std::cout << "Лутай Мирослава Олександрівна";
            break;
        case 13:
            std::cout << "Малик Поліна Євгенівна";
            break;
        case 14:
            std::cout << "Польова Дарія Олександрівна";
            break;
        case 15:
            std::cout << "Прокошина Карина Ігорівна";
            break;
        case 16:
            std::cout << "Рачкова Єлизавета Євгеніївна";
            break;
        case 17:
            std::cout << "Рябокінь Дмитро Олександрович";
            break;
        case 18:
            std::cout << "Середа Ілля Петрович";
            break;
        case 19:
            std::cout << "Синяченко Богдан Вадимович";
            break;
        case 20:
            std::cout << "Стяглюк Анна Олександрівна";
            break;
        case 21:
            std::cout << "Тищенко Андрій Борисович";
            break;
        case 22:
            std::cout << "Трісунов Євген Русланович";
            break;
        case 23:
            std::cout << "Царанова Софія Олександрівна";
            break;
        case 24:
            std::cout << "Шаповалов Максим Павлович";
            break;
        case 25:
            std::cout << "Щербак В`ячеслав Олександрович";
            break;
        default:
            std::cout << "unexpected error";
            break;
    }
	return 0;
}
