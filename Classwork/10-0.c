#include <stdio.h>
#include <math.h>
#define e 2.71828182845904
#define pi 3.1415
//1
double F1(double x)
{
    double y1;
    if (x<=3)
    {
        y1 = pow(x,2) - 3 * x + 9;
        return y1;
    }
    y1 = 1 / (pow(x,3) + 3);
    return y1;
}

double F2(double x)
{
    double y2;
    y2 = x * pow(e,sin(pow(x,2)));
    return y2;
}

int main(void)
{
    double x;
    puts("Введите значение для 'x':");
    scanf("%lf",&x);
    printf("Произведение - %lf\nРазность квадратов - %lf\nУдвоенная сумма - %lf\n", F1(x) * F2(x), pow(F1(x),2)-pow(F2(x),2), 2*(F1(x)+F2(x)));
    
}

////2
//double SIN(double x)
//{
//    return sin(x);
//}
//
//int fact(int n)
//{
//    int res = 1;
//    for (int i = 1; i <= n; ++i)
//    {
//        res *= i;
//    }
//    return res;
//}
//
//double sin_n(double x, int N)
//{
//    double res = 0;
//    int i = 1;
//    puts("\n|   N   |   sin_N  |  отклонение |\n");
//    for (i = 1; i <= N; ++i)
//    {
//        res += (pow((-1), (i-1)) * (pow(x, ((2*i)-1)) / 6));
//        printf("|%4d   | %8lf |             |\n", i, res);
//    }
//    return res;
//}
//
//double sin_eps(double x, double eps)
//{
//    double res = 0;
//    double term = x;
//    int k = 1;
//    while (fabs(term) > eps)
//    {
//        res += term;
//        term = pow(-1, k) * pow(x, 2 * k + 1) / fact(2 * k + 1);
//        k++;
//    }
//    return res;
//}
//
//int main(void)
//{
//    double x;
//    int N;
//    double eps = 1e-6;
//    puts("Введите значение x: ");
//    scanf("%lf", &x);
//    puts("Введите значение N: ");
//    scanf("%d", &N);
//    double standart = SIN(x), res_n = sin_n(x, N), res_eps = sin_eps(x, eps);
//    printf("\n>sin(%.3lf) с помощью функции sin(x) стандартной библиотеки Cи: %lf\n", x, standart);
//    printf("\n>sin(%.3lf) путем создания собственной функции, вычисляющий значение как сумму ряда: %lf\n", x, res_n);
//    printf("\n>sin(%.3lf) через ряд Маклорена с заданной пользователем точностью %lf: %lf\n\n", x, eps, res_eps);
//
//}




