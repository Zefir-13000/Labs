#include <iostream> 
#include <cstdint>
#include <cmath>

static double cos_taylor(double x) {
    double result = 1.0;
    double sign = -1.0; 
    double factorial = 1.0;
    double power = 1.0;

    for (uint32_t i = 1; i < 10; ++i) {
        power *= x * x;
        factorial *= (2 * i - 1) * (2 * i);
        result += sign * power / factorial;
        sign *= -1.0;
    }

    return result;
}

int main()
{
    double y = 0;
    double st = 0;
    double err = 0;

    puts("==========================================================");
    printf("x\t\ty\t\tstandart\terror \n");
    puts("==========================================================");
    for (float x = -2; x <= 2; x += 0.5)
    {
        if (-1 <= x && x <= 0)
        {
            y = cos_taylor(x / 2) / cos_taylor(x * x);
            st = cos(x / 2) / cos(x * x);
            err = st - y;
            printf("%f\t%f\t%f\t%.*e \n", x, y, st, 10, err);
        }
        else if (x > 0)
        {
            y = pow(cos_taylor(x / 2), 2) * cos_taylor(2 * x);
            st = pow(cos(x / 2), 2) * cos(2 * x);
            err = st - y;
            printf("%f\t%f\t%f\t%.*e \n", x, y, st, 10, err);
        }
        else {
            printf("%f\tNot defined! \n", x);
        }
    }
    return 0;
}