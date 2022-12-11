#include <stdio.h>
int main()
{

    double a = 2.0, b = 3.0, c = 0.4E1, p = 3.14;

    printf("5*a + 76 + 3.1 = %f\n", 5 * a + 76 + 3.1);
    printf("%f\n", 1 / (a * a));
    printf("%f\n", (-a) * (-a));
    printf("%f\n", (a + 6) / (2 * p * a) + (1 / a));
    printf("%f", a + ((b - (p / c)) / a + (c / a - (1 / b))));

    return 0;
}