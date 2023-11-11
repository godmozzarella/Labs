#include <stdio.h>

//int main(void)
//{
////1
//
//    short int *pi, i=5;
//    float *pf, f=2.1;
//    char *pc,c = 'W';
//    double *pd, d = 2.1;
//    printf("%lu, %lu\n", sizeof(pi), sizeof(i));
//    printf("%lu, %lu\n", sizeof(pf), sizeof(f));
//    printf("%lu, %lu\n", sizeof(pc), sizeof(c));
//    printf("%lu, %lu\n", sizeof(pd), sizeof(d));
//
//}

////2
//int main(void)
//{
//    float PI=3.14159,*p1,*p2;
//    p1=p2=&PI;
//    printf("По адресу p1=%p хранится *p1=%g\n",p1,*p1);
//    printf("По адресу p2=%p хранится *p2=%g\n",p2,*p2);
//}

////3
//int main(void)
//{
//
//    double  *pa, x = 909879;
//    pa = &x;
//    x++;
//    printf("%p %lf\n",&x, *pa);
//    pa++;
//    x--;
//    printf("%p %lf\n",pa, *pa);
//    pa--;
//    x--;
//    printf("%p %lf\n",pa, *pa);
//}

////4
//int main(void)
//{
//    float array[10]={1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.1};
//    float *ptr_a = array;
//    //    ptr_a ++;
//    //    ptr_a = ptr_a + 4;
//    //    ptr_a = ptr_a - 2;
//    //    printf("%p %f\n", ptr_a, *ptr_a);
//    for (int i=0; i<10 ; i+=2)
//    {
//        printf("%.1f ", ptr_a[9]);
//        ptr_a--;
//  
//    }
//}

////5
//int main (void)
//{
//        int x=0x12345678; //переменная инициализированная значением 0x12345678
//        int * prt; //указатель для исследуемой переменной
//        unsigned char *a1, *a2, *a3, *a4; //указатели на байты
//        unsigned char *a; //указатель на байт
//        prt=&x; //получение адреса переменной
//        a=(unsigned char*) prt;//преобразование типа для получения указателя на один байт
//        a1=a+3;
//        a2=a+2;// получение 4-то байта числа х a2=a+2;
//        a3=a+1;
//        a4=a; // получение первого байта числа x
//        printf("%.2x\n%.2x\n%.2x\n%.2x\n", *a1, *a2, *a3, *a4);
//    
//    
//    
//}

//int main(void)
//{
//    short int b=0;
//    int size=0;
//    while (++b!=0) size++;
//
//    printf("short int - %d\n", size);
//}

