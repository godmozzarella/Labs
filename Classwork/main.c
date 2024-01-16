#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>
#define size 100
#define N 20
#define K 5

////Задание 1
//char rival (int m);
//void game(char m1, char k);
//
//int main(void)
//{
//    puts ("Игра: 'Камень, ножницы, бумага'\nВведите 'K' - камень, 'N' - ножницы или 'B' - бумага\n");
//    srand(time(NULL));
//    int m = 1 + rand()%3;
//    char k;
//    scanf("%c", &k);
//    char m1 = rival (m);
//    printf ("Соперник выкинул: %c\n\n", m1);
//    game(m1,k);
//}
//
//char rival (int m)
//{
//    if (m==1) m = (char)'K';
//    else if (m==2) m = (char)'N';
//    else m = (char)'B';
//    return m;
//}
//
//void game(char m1, char k)
//{
//    if ((k == 'K' && m1 == 'N')||(k == 'N' && m1 == 'B')||(k == 'B' && m1 == 'K')) puts("> Win! :D\n");
//    else if ((k == 'N' && m1 == 'K')||(k == 'B' && m1 == 'N')||(k == 'K' && m1 == 'B')) puts ("> Lose :(\n");
//    else puts("> Draw...\n");
//}
//
////Задание 2
//int rand10(int);
//double rand_double( double, double);
//int* randd10( int, int);
//double* randd_double(int, double);
//
//int main (void)
//{
//    srand(time(NULL));
//    int mmax,n;
//    double dmax,dmin;
//    
//    puts("Введите максимальное для целых:");
//    scanf ("%d", &mmax);
//    puts("Введите максимальное и минимальное для дробных:");
//    scanf ("%lf%lf", &dmax,&dmin);
//    puts("Введите кол-во для целых и дробных:");
//    scanf ("%d", &n);
//    
//    printf("> целое число от 1 до mmax - %d\n",rand10(mmax));
//    printf("> вещественное число в заданном диапазоне - %lf",rand_double(dmin, dmax));
//    puts("\n> n целых чисел от 1 до mmax:\n");
//    for (int k = 0; k < n; ++k)
//    {
//        printf("%d\n", *(randd10(n,mmax) + k));
//    }
//    puts("> n вещественных чисел в диапазоне от -dmax до +dmax:\n");
//    for (int k = 0; k < n; ++k)
//    {
//        printf("%lf\n", *(randd_double(n,dmax)+ k));
//    }
//    puts("\n");
//    
//}
//
//int rand10(int mmax)
//{
//    int i;
//    i = 1 + rand() % mmax;
//    return i;
//}
//
//double rand_double( double dmin, double dmax)
//{
//    double d;
//    d = (dmin + rand() % (int)dmax);
//    return d;
//}
//
//int* randd10(int n, int mmax)
//{
//    int i[N];
//    int* ptr_i = &i[0];
//    for (int k = 0; k < n; ++k) 
//    {
//        ptr_i[k] = 1 + rand() % mmax;
//    }
//    return ptr_i;
//}
//
//double* randd_double(int n, double dmax)
//{
//    double d[N];
//    double* ptr_d = &d[0];
//    for (int k = 0; k < n; ++k)
//    {
//        *(ptr_d + k) = rand_double(-(dmax), dmax);
//    }
//    return ptr_d;
//}

////Задание 3
//int* rand_N(int* ptr_array);
//
//int main(void)
//{
//    srand(time(NULL));
//    
//    int counter[K]={0, 0, 0, 0, 0}, array[N];
//    int* ptr_array = &array[0];
//    char sum[size];
//    for (int k = 0; k < N; ++k)
//       {
//           array[k] = *(rand_N(ptr_array)+k);
//       }
//    for (int k = 0; k < K; ++k)
//    {
//        counter[array[k]]++;
//    }
//    printf ("%d %d %d %d %d\n",counter[0],counter[1],counter[2],counter[3],counter[4]);
//    int nmax = K, R = K+N;
//    for (int k = 0; k < K; ++k)
//    {
//        int x = counter[k]/counter[nmax]*R;
//    }
//   
//}
//
//int* rand_N(int* ptr_array)
//{
//    for (int k = 0; k < N; ++k)
//    {
//        ptr_array[k] = 1 + rand() % K;
//    }
//    return ptr_array;
//}
//
//
int rand10(int, int);
int* _rand10(int*, int, int);
int put_elements(int*);
int* sort(int*);
int randInRange(int, int);
int* rand_array(int, int, int);

int main(void)
{
    int max = K, mmin, mmax, nmax = 0;
    int arrayy[K];
    int* ptr_array = &arrayy[0];

    srand(time(0));
    
    scanf("%d%d", &mmin, &mmax);
    _rand10(ptr_array, mmin, mmax);
    put_elements(ptr_array );
    sort(ptr_array);
    put_elements(ptr_array);
    printf("\n\n\n");

    //ÔÓÒÚÓÂÌËÂ „ËÒÚÓ„‡ÏÏ˚
    int counter[N + 1] = { 0 };
    int* array = rand_array(K, 1, 10);
    for (int i = 0; i < K; ++i) {
        if (array[i] >= 0 && array[i] <= K) {
            counter[array[i]]++;
        }
    }

    for (int i = 1; i <= N; ++i) {
        if (counter[i] > counter[nmax]) {
            nmax = i;
        }
    }

    for (int i = 1; i <= N; ++i) {
        int x = (counter[i] * K) / (counter[nmax] != 0 ? counter[nmax] : 1);
        printf("<%2d>  - ", i);
        for (int j = 0; j < x; ++j) {
            printf(" *");
        }
        printf("\n");
    }
}
int rand10(int mmin, int mmax) {

    return mmin + rand() % mmax;
}
int* _rand10(int* ptr_array, int mmin, int mmax) {
    for (int i = 0; i <= 10; i++) {
        *(ptr_array + i) = rand10(mmin, mmax);
    }
    return ptr_array;
}

int put_elements(int* ptr_array) {

    for (int i = 0; i < 10; i++) {

        printf("\t%d", *(ptr_array + i));
    }
    return 0;
}
int* sort(int* ptr_array) {
    for (int i = 0; i <= 9; i++) {
        for (int j = i + 1; j <= 10; j++) {
            if (*(ptr_array + i) < *(ptr_array + j)) {

                int temp = *(ptr_array + i);
                *(ptr_array + i) = *(ptr_array + j);
                *(ptr_array + j) = temp;

            }
        }
    }
    return ptr_array;
}
int randInRange(int min, int max) {
    return min + rand() % (max - min + 1);
}
int* rand_array(int n, int minRange, int maxRange) {
    int* array = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; ++i) {
        array[i] = randInRange(minRange, maxRange);
    }
    return array;
}
