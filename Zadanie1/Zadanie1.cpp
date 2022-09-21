#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    for (; ; )
    {
        //Выбор задачи
        setlocale(LC_ALL, "Rus");
        printf("\n\nВыберите задачу, которую хотите решить: \n 1 - Квадратное уравнение \n 2 - Система двух линейных уравнений \n 3 - Вычисление факториала \n");
        printf("\nЕсли вы хотите выйти из программы нажмите англ.заглавную С\n");
        int enter;
        scanf_s("%d", &enter);
        switch (enter)
        {
        case 1:
            quadronicEducation();
            break;
        case 2:
            Lin_Ur();
            break;

        case 3:
            factorial();
            break;

        default:
            printf("Выберите существующий номер задачи: \n");
            break;
        }
        //Выход из бесконечного цикла
        char ch;
        scanf_s("%c", &ch);
        if (ch == 'C') break;
    }
    return 0;
}

int quadronicEducation(void)
{
    printf("\n\nВведите входные параметры задачи ax^2 + bx + c = 0: \n");
    int a, b, c;
    printf("\nВведите переменную а:\n");
    scanf_s("%d", &a);
    printf("Введите переменную b:\n");
    scanf_s("%d", &b);
    printf("Введите переменную c:\n");
    scanf_s("%d", &c);
    double d, x1, x2;
    d = (b * b) - 4 * a * c;
    if (d > 0)
    {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        printf("x1=%f ", x1);

        printf("x2=%f", x2);
    }
    if (d < 0)
    {
        printf("Вещественных корней нет\n\n");
    }
    if (d == 0)
    {
        x1 = (-b + sqrt(d)) / (2 * a);
        printf("x1=x2=%f", x1);
    }
}

float factorial(void)
{
    printf("\n\nВведите число !: ");
    float n;
    scanf_s("%f", &n);
    float res = 1;
    float i = 2;
    if (n <= 0)
    {
        printf("Факториал равен 0");
    }
    else {
        while (i <= n)
        {
            res *= i;
            i++;
        }
        printf("\nФакториал числа %f = %f", n, res);
    }
}

int Lin_Ur(void)
{
    double a, b, c, d, e, f, x, y;
    printf(" \n Введите переменные в соответствии с шаблоном ax+by=c и dx+ey=f \n a = ");
    scanf_s("%lf", &a);
    printf(" b = ");
    scanf_s("%lf", &b);
    printf(" c = ");
    scanf_s("%lf", &c);
    printf(" d = ");
    scanf_s("%lf", &d);
    printf(" e = ");
    scanf_s("%lf", &e);
    printf(" f = ");
    scanf_s("%lf", &f);
    x = (c * e - b * f) / (a * e - b * d);
    y = (a * f - d * c) / (a * e - b * d);
    printf("x=%lf\n", x);
    printf("y=%lf\n", y);
}


