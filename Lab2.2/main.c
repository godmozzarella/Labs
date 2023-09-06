#include <stdio.h>
/*

//№1

int main(int argc, const char * argv[]) {
    printf("3) %s\t", "Это текст");//1
    printf("%s\n\n", "Это текст");//3
    printf("5) %.5f\n\n", 12.234657);//5
    printf("7) %d / %d = %d\n", 7,5,7/5);//7
    printf("7) %d * %d = %d\n\n", 7,5,7/5);//7
    printf ("9) %f / %f = %f\n",5., 2., 5./2);//9 вычисление в формате float
    printf ("9) %d / %d = %d\n",5, 2, 5/2);//9 формат d не работает с числами с "." (форматом float), ответ округлен
    printf ("9) %g / %g = %g\n",5., 2., 5./2);//9 точный ответ
    printf ("9) %e / %e = %e\n\n",5., 2., 5./2);//9 другое
}

//№2

/*
int main(int argc, const char * argv[]) {
    short  n = 2, k = 22;
    printf("1) Сейчас %d часа %d минуты 00 секунд\n", n,k);
    printf("2) Идет %d минута суток\n",n*60+22+1);
    printf("3) До полуночи остался %d час и %d минут\n", 23-n,60-k);
    printf("4) С 8.00 прошло %d секунд\n",((24-8+n)*60+k)*60);
    printf("5) Текущий час  = %g суток  и текущая минута = %g часа\n", 2./24,22./60);
}
*/

//№3

int main(int argc, const char * argv[]) {
    short e=3;
    float n=3;

    printf("       %d\n     %d\n ---------\n  %0+8.3f\n ",e,333, n/333);
    
}
*/

