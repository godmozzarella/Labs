#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>
#include <math.h>
#define N 25

//
//double F(double x);
//void new_f (FILE* file,double z, double x);
//void old_f (FILE* out,double a,double z, double x);
//
//int main (void)
//{
//    FILE *file = fopen("/Users/kirillpustovojt/Desktop/Labs/Clsasswork 19.0/Clsasswork 19.0/temp.txt", "w");
//    FILE *out = fopen ("/Users/kirillpustovojt/Desktop/Labs/Clsasswork 19.0/Clsasswork 19.0/number. txt", "w");
//    
//    puts ("введите число которое хотите вписать в файл");
//    double a;
//    scanf ("%lf", &a);
//    double z ,x = 2;
//    puts ("Введите значение табуляции");
//    scanf("%lf",&z);
//    
//    new_f (file,z,x);
//    old_f (out,a,z,x);
//    
//    fclose(file);
//    fclose(out);
//}
//
//double F(double x)
//{
//    double y = pow(2,x) - 2 * pow(x,2) - 1;
//    return y;
//}
//
//void new_f (FILE* file,double z, double x)
//{
//    char v = ' ';
//    for (;x<=4; x+=z)
//    {
//        fprintf(file,"_________________________________________\n");
//        fprintf(file,"|%5c%lf%5c|%5c%lf%5c|\n",v,x,v,v,F(x),v);
//    }
//    fprintf(file,"-----------------------------------------\n");
//}
//
//void old_f (FILE* out,double a,double z, double x)
//{
//   
//    puts ("Создание фаила") ;
//    fprintf (out, "%d", 5) ;
//    fprintf (out, "\n%lf", a);
//    char v = ' ';
//    for (;x<=4; x+=z)
//    {
//        fprintf(out,"_________________________________________\n");
//        fprintf(out,"|%5c%lf%5c|%5c%lf%5c|\n",v,x,v,v,F(x),v);
//    }
//    fprintf(out,"-----------------------------------------\n");
//}



struct videocards{
    char brand[10];
    int perform;
    int price;
    char gpu[10];
    int memory;
};
typedef struct videocards cards;

void input_card(FILE* file, cards* card);

int main (void)
{
    FILE *file = fopen("/Users/kirillpustovojt/Desktop/Labs/Clsasswork 19.0/Clsasswork 19.0/vid.txt", "w");
    cards* card;
    card = (cards*)malloc(N * sizeof(cards));
    input_card(file,card);
    puts("\n");
    
    fclose(file);
}

void input_card(FILE* file,cards* card)
{
    puts("Производитель:");
    scanf("%s", card->brand);
    puts("Производительность:");
    scanf("%d", &card->perform);
    puts("Цена:");
    scanf("%d", &card->price);
    puts("Тип процессора:");
    scanf("%s", card->gpu);
    puts("Объем памяти: ");
    scanf("%d", &card->memory);
    puts("Поля добавленны в файл");
    fprintf(file, "|Производитель:%10s| Производительность:%5d| Цена:%6d| Тип процессора:%10s| Объем памяти:%5d|\n",
           card -> brand, card -> perform, card -> price, card -> gpu, card -> memory);
}


