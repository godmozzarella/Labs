#include <stdio.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#define N 25

////1
//typedef struct
//{
//    float x;
//    float y;
//    char name;
//} 
//Point;
//
//void put_point(Point a);
//float dist (Point a, Point b);
//void mid_point(Point a, Point b);
//int chet_point(Point a);
//
//int main(void)
//{
//    Point a, b;
//    puts("Введите координаты для точки 'a'");
//    scanf("%f%f",&a.x,&a.y);
//    puts("Введите координаты для точки 'b'");
//    scanf("%f%f",&b.x,&b.y);
//    a = (Point) { a.x, a.y, 'A' };
//    b.name = 'B';
//    put_point(a);
//    printf("\nРасстояние от точки 'a' до точки 'b' = %f\n", dist(a,b));
//    mid_point(a,b);
//    printf("Точка 'a' находится в(o) %d четверти\n", chet_point(a));
//    
//}
//
//void put_point(Point a)
//{
//    printf("point %c (%.1f, %.1f)", a.name, a.x, a.y);
//}
//
//float dist (Point a, Point b)
//{
//    double ab = fabs(sqrt(pow(a.x - b.x,2) + pow(a.y - b.y,2)));
//    return ab;
//}
//
//
//void mid_point(Point a, Point b)
//{
//    Point c;
//    c.x = (a.x + b.x) / 2;
//    c.y = (a.y + b.y) / 2;
//    c = (Point) {c.x,c.y,'C'};
//    printf("point %c (%.1f, %.1f)\n", c.name, c.x, c.y);
//}
//
//int chet_point(Point a)
//{
//    if (a.x > 0 && a.y > 0) return 1;
//    if (a.x > 0 && a.y < 0) return 2;
//    if (a.x < 0 && a.y < 0) return 3;
//    if (a.x < 0 && a.y > 0) return 4;
//    return 0;
//}
//
////2
//typedef struct
//{
//    int tm_sec;
//    int tm_min;
//    int tm_hour;
//    int tm_mday;
//    int tm_mon;
//    int tm_year;
//} tm;
//
////
////
//int main(void)
//{
//    char info[1000];
//    struct tm *mytime;
//    time_t t = time(&t);
//    mytime = localtime(&t);
//    const char format[] = "---------------------------------------------------------------------------------------------------------------------\n********************************************* Московское время %02d:%02d:%02d *********************************************\n********************************************* Сегодняшняя дата %02d.%02d.%2.d *********************************************\n---------------------------------------------------------------------------------------------------------------------\n";
//    
//    sprintf(info, format ,mytime->tm_hour, mytime->tm_min, mytime ->tm_sec,mytime->tm_mday, mytime->tm_mon+1, mytime ->tm_year-100);
//    puts (info);
//}
//


//3

struct videocards{
    char brand[10];
    int perform;
    int price;
    char gpu[10];
    int memory;
};
typedef struct videocards cards;


int main (void)
{

    cards* card;
    card = (cards*)malloc(sizeof(cards) * N);
    char c = ' ';
    while (c != '7')
    {
        puts("\nВыберите действие:\n'1' - Ввести производителя видеокарты;\n'2' - Ввести производительность видеокарты;\n'3' - Ввести цену видеокарты;\n'4' - Ввести тип процессора видеокарты;\n'5' - Ввести объем памяти видеокарты;\n'6' - Вывести введенные данные;\n'7' - Я все, пока!\n");
        scanf("%c",&c);
        switch (c)
        {
            case '1':
                puts("Введите производителя видеокарты:");
                scanf("%s", card->brand);
                
                break;
            case '2':
                puts("Введите производительность видеокарты:");
                scanf("%d", &card->perform);
               
                break;
            case '3':
                puts("Введите цену видеокарты:");
                scanf("%d", &card->price);
            
                break;
            case '4':
                puts("Введите тип процессора видеокарты:"); //встроенный/дискретный
                scanf("%s", card->gpu);
               
                break;
            case '5':
                puts("Введите объем памяти видеокарты:");
                scanf("%d", &card->memory);
              
                break;
            case '6':
                printf("Производитель:%10s; Производительность:%5d; Цена:%6d; Тип процессора:%10s; Объем памяти:%5d\n",
                       card -> brand, card -> perform, card -> price, card -> gpu, card -> memory);
             
                break;
            case '7':
                puts(">ready");
            default:
                break;
        }
    }
}

