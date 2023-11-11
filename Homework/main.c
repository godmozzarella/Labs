#include <stdio.h>
#include <math.h>
void S(int A)
{
    double B = (A * ((sqrt(5)+1)/2));
    printf("Площадь фигуры = %lf\n", A*B);
}
void name(void)
{
    puts("Это золотой пряоугольник");
}

void draw(int a,char c)
{
    double b = (a * ((sqrt(5)+1)/2));
    for (int y=0; y<b; ++y)
    {
        for (int x=0; x<a; ++x)
        {
            if (x > 0 && x < a-1 && y > 0 && y < b-1) printf ("%c",' ');
            else printf ("%c", c);
        }
        printf("\n");
    }
}

int main(void)
{
    puts("Выберите действие:\nРасчитать площадь - 's'\nВывести определение фигуры - 'n'\nНарисовать фигуру - 'd'");
    char C;
    scanf("%c",&C);
    switch (C)
    {
        case 's':
            puts("Введите длину стороны 'a':");
            int A;
            scanf("%d",&A);
            S(A);
            break;
        case 'n':
            name();
            break;
        case 'd':
            puts("Введите символ, из которого будет строиться фигура и длину стороны 'a':");
            char c;
            int a;
            scanf("%c%d",&c,&a);
            draw(a,c);
            break;
        default:
            puts("Неизвестная операция");
            break;
    }
    
}
//
//int main(void)
//{
//    char c,C;
//    int a;
//    puts("Введите символ, из которого будет строиться фигура и длину стороны 'a':\nВыберите действие:\nРасчитать площадь - 's'\nВывести определение фигуры - 'n'\nНарисовать фигуру - 'd'\n");
//    scanf("%c%d%c",&c,&a,&C);
//    switch (C)
//    {
//        case 's':
//            S(a);
//            break;
//
//        case 'n':
//            name();
//            break;
//
//        case 'd':
//            draw(a,c);
//            break;
//
//        default: puts("Неизвестная операция");
//            break;
//    }
//
//}
