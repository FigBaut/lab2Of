#include <stdio.h>
#include <math.h>

#define EPS 1e-12

int main(void)
{
    double a, b, c, d, x, y;
    double res1, res2, res3, res4, res5;
    double tmp;

    printf("Введите a, b, c, d, x, y через пробел (углы в радианах): ");
    if (scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &x, &y) != 6)
    {
        printf("Ошибка ввода данных.\n");
        return 1;
    }

    // Задание 38
    tmp = cos(d);
    if (fabs(tmp) < EPS)
        printf("Задание 1: деление на ноль.\n");
    else
    {
        res1 = (a * b * sin(c)) / tmp;
        printf("Задание 1: %.4f\n", res1);
    }

    // Задание 45
    tmp = fabs(x + 1.0);
    if (tmp < EPS)
        printf("Задание 2: деление на ноль.\n");
    else
    {
        res2 = fabs(x) / tmp;
        printf("Задание 2: %.4f\n", res2);
    }

    // Задание 4
    if (fabs(cos(x)) < EPS)
        printf("Задание 3: тангенс не существует.\n");
    else
    {
        tmp = 1.0 + x * x * fabs(y - tan(x));
        res3 = (3.0 + exp(y - 1.0)) / tmp;
        printf("Задание 3: %.4f\n", res3);
    }

    // Задание 41
    tmp = 1.0 - sin(x) * sin(x);

    if (tmp < 0.0 && tmp > -EPS)
        tmp = 0.0;

    if (tmp >= 0.0)
    {
        res4 = sqrt(tmp);
        printf("Задание 4: %.4f\n", res4);
    }
    else
    {
        printf("Задание 4: ошибка вычисления.\n");
    }

    // Задание 42
    tmp = a * x * x + b * x + c;
    if (tmp <= 0.0)
        printf("Задание 5: корень из неположительного числа.\n");
    else
    {
        res5 = 1.0 / sqrt(tmp);
        printf("Задание 5: %.4f\n", res5);
    }

    return 0;
}
