#include <iostream> 
#include <cstdint>
#include <cmath> 

static double cos_taylor(double x) {
    double result = 1.0;
    double sign = -1.0;
    double factorial = 1.0;
    double power = 1.0;

    for (int i = 1; i < 10; ++i) {
        power *= x * x;
        factorial *= (2 * i - 1) * (2 * i);
        result += sign * power / factorial;
        sign *= -1.0;
    }

    return result;
}

static double exp_taylor(double x) {
    double result = 1.0;
    double power = 1.0;
    double factorial = 1.0;

    for (int i = 1; i < 10; ++i) {
        power *= x;
        factorial *= i;
        result += power / factorial;
    }

    return result;
}

void print_table(double (*func)(double), double a, double b, double h) {
    std::cout << " x\tValue\n";
    std::cout << "------------------------\n";
    for (double x = a; x <= b; x += h) {
        std::cout << x << "\t" << func(x) << std::endl;
    }
}

int main() {
    double a, b, h;
    
    std::cout << "Enter the interval [a, b]: ";
    std::cin >> a >> b;
    std::cout << "Enter the step size h: ";
    std::cin >> h;

    std::cout << "\nTable cos(x) Taylor:\n";
    print_table(cos_taylor, a, b, h);
    
    std::cout << "\nTable exp(x) Taylor:\n";
    print_table(exp_taylor, a, b, h);
}