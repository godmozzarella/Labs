#include <locale.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define N 1000

float* full_elements(float* ptr_A, int n)
{
    for (int i = 0; i < n; ++i) ptr_A[i] = -10 + rand() % 41;
    return ptr_A;
}

int put_elements(float* ptr_A, int n)
{
    for (int i = 0; i < n; ++i) printf("%d\n",(int)ptr_A[i]);
    return 0;
}

double calc_elements(int k2, int kp)
{
    return (float)k2/kp;
}

double sum_elements(float* ptr_A,int n)
{
    int sum = 0;
    for (int i = 0; i < n; ++i)
    {
        sum+=ptr_A[i];
    }
    return sum;
}

int find_element(float* ptr_A, int n, int a)
{
    for (int i = 0; i < n; ++i)
    {
        if (ptr_A[i] == a) return i;
    }
    return -1;
}

int function (float* ptr_A, int n, int e)
{
    int min = ptr_A[0], mindx = -1;
    for (int i = 0; i < n; ++i)
    {
        if (ptr_A[i] > e && ptr_A[i] < min && ptr_A[i] > 0)
        {
            mindx = i;
            min = ptr_A[i];
        }
    }
    return mindx;
}
int main(void)
{
    char c = ' ';
    int n,k2 = 0,kp = 0,a,e;
    float A[N];
    float* ptr_A = A;
    puts(">Введите размер массива:");
    scanf("%d", &n);
    full_elements(ptr_A, n);
    puts("\nВыберите действие:\n'1' - Заполнение массива\n'2' - Отношение количества четных значений элементов массива к числу положительных\n'3' - Сумма элеменов массива\n'4' - Поиск элемента\n'5' - Вычисление индекса\n'6' - Завершение программы");
    while (c != '6')
    {
        scanf("%c", &c);
        switch (c)
        {
            case '1':
                puts("\n>Заполнение массива:");
                put_elements(ptr_A, n);
                break;
                
            case '2':
                for (int i=0; i<n; ++i)
                {
                    if ((int)ptr_A[i] % 2 == 0) k2++;
                }
                for (int i=0; i<n; ++i)
                {
                    if (ptr_A[i]>0) kp++;
                }
                printf("\n>Отношение количества четных значений элементов массива к числу положительных: %lf\n", calc_elements(k2,kp));
                break;
                
            case '3':
                printf("\n>Сумма элеменов массива: %lf\n",sum_elements(ptr_A, n));
                break;
                
            case '4':
                puts("\nВведите элемент, который хотите найти:");
                scanf ("%d", &a);
                printf("\n>Поиск элемента '%d' ", a);
                printf("\n>Индекс элемента: %d\n", find_element(ptr_A, n, a));
                break;
                
            case '5':
                puts("\nВведите элемент, болоше которого нужно искать:");
                scanf ("%d", &e);
                printf ("\n>Индекс минимального положительного элемента, большего '%d': %d", e, function (ptr_A, n, e));
                break;
            case '6':
                puts(">ready");
                break;
        }
    }
}
