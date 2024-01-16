#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define N 1000

//double* memory_array(double* ptr_array, int size);
//double* full_elements(double* ptr_array, int size);
//int print_array(double* ptr_array,double* ptr_array2, int size);
//double* calc_elements(double* ptr_array,double* ptr_array2, int size);
//int delete_k (double* ptr_array, int size, int k);
//int max_k (double* ptr_array, int size);
//double* insert(double* ptr_array, int size, int indexx, int num);
//
//int main(void){
//    srand(time(NULL));
//    double array[N], array2[N];
//    int size, k = 0, num = -999;
//    double* ptr_array = array, *ptr_array2 = array2;
//    puts(">Введите размер массива:");
//    scanf("%d", &size);
//    memory_array(ptr_array, size);
//    full_elements(ptr_array,size);
//    calc_elements(ptr_array,ptr_array2,size);
//    print_array(ptr_array, ptr_array2, size);
//    puts("Введитe элемент, который хотите удалить:");
//    scanf("%d", &k);
//    printf(">Кол-во элементов - %d", delete_k(ptr_array, size, k));
//    puts("\n");
//    print_array(ptr_array, ptr_array2, size-1);
//    puts("\n");
//    printf(">Максимальный элемент массива с индексом - %d\n", max_k (ptr_array, size));
//    int indexx = max_k (ptr_array, size);
//    insert(ptr_array, size, indexx , num);
//    print_array(ptr_array, ptr_array2, size);
////   free(ptr_array);
////   free(ptr_array2);
//
//}
//
//double* memory_array( double* ptr_array, int size){
//    ptr_array = (double*)malloc(size * sizeof(double));
//    if (ptr_array == NULL) {
//        puts("error");
//    }
//    return ptr_array;
//}
//
//double* full_elements(double* ptr_array, int size){
//    for (int i = 0; i < size; ++i) ptr_array[i] =   1 + rand() / (double)(RAND_MAX + 1)  ;
//    return ptr_array;
//}
//
//int print_array(double* ptr_array, double* ptr_array2, int size){
//    puts(">Массив №1:");
//    for (int i = 0; i < size; ++i){
//        printf ("%lf ", ptr_array[i]);
//    }
//    printf("\n\n>Массив №2:\n %lf\n\n", ptr_array2[0]);
//    return 0;
//}
//
//double* calc_elements(double* ptr_array,double* ptr_array2, int size){
//    double kp = 0, k2 = 0;
//    for (int i = 0; i < size; ++i){
//        if ((int)ptr_array[i] % 2 == 0) k2++;
//    }
//    for (int i = 0; i < size; ++i){
//        if (ptr_array[i] > 0) kp++;
//    }
//    ptr_array2[0] = k2/kp;
//    return ptr_array2;
//}
//
//int delete_k (double* ptr_array, int size, int k) {
//    int n = size-1;
//    for (int i = k-1; i < size; i++) ptr_array[i] = ptr_array[i + 1];
//    return n;
//}
//
//int max_k (double* ptr_array, int size){
//    int index = 0;
//    for (int i = 0; i < size; ++i){
//        if (ptr_array[i] > ptr_array[index]) index = i;
//    }
//    return index;
//}
//
//double* insert(double* ptr_array, int size, int indexx, int num){
//    ptr_array = realloc(ptr_array, (size + 1) * sizeof(double));
//    size++;
//    for (int i = 0; i < indexx + 1; i++) ptr_array[size - 1 -i] = ptr_array [size - 2 -i];
//    ptr_array[indexx] = num;
//    return ptr_array;
//}

double* memory_array( double* ptr_mass1, int size);
double* full_elements(double* ptr_mass1, int size);
int print_mass(double* ptr_mass1, double* ptr_mass2, double* ptr_mass3, double* new_mass, int size);
double* edit_new_mass(double* ptr_mass1, double* ptr_mass2, int size);

int main(void){
    srand(time(NULL));
    double mass1[N],mass2[N],mass3[N];
    double* ptr_mass1 = mass1, *ptr_mass2 = mass2, *ptr_mass3 = mass3;
    int size = 10 + rand()%  50;
    memory_array(mass1, size);
    full_elements(ptr_mass1,size);
    memory_array(mass2, size);
    full_elements(ptr_mass2,size);
    memory_array(mass3, size);
    full_elements(ptr_mass3,size);
    print_mass(ptr_mass1, ptr_mass2, ptr_mass3, edit_new_mass(ptr_mass1, ptr_mass2, size) , size);
    
}

double* memory_array( double* ptr_mass1, int size){
    ptr_mass1 = (double*)malloc(size * sizeof(double));
    if (ptr_mass1 == NULL) {
        puts("error");
    }
    return ptr_mass1;
}

double* full_elements(double* ptr_mass1, int size){
    for (int i = 0; i < size; ++i) ptr_mass1[i] = ((double)rand() * (50  - 10 )) / (double)RAND_MAX + 10;
    return ptr_mass1;
}

int print_mass(double* ptr_mass1, double* ptr_mass2, double* ptr_mass3,double* new_mass, int size){
    puts(">Массив №1:");
    for (int i = 0; i < size; ++i){
        printf ("%lf ", ptr_mass1[i]);
    }
    puts("\n");
    puts("\n>Массив №2:");
    for (int i = 0; i < size; ++i){
        printf ("%lf ", ptr_mass2[i]);
    }
    puts("\n");
    puts("\n>Массив №3:");
    for (int i = 0; i < size; ++i){
        printf ("%lf ", ptr_mass3[i]);
    }
    puts("\n");
    puts("\n>Массив №4:");
    for (int i = 0; i < size; ++i){
        printf ("%lf ", new_mass[i]);
    }
    puts("\n");
    return 0;
}

double* edit_new_mass(double* ptr_mass1, double* ptr_mass2, int size){
    double* new_mass = calloc(N, sizeof(double));
    for (int i = 0; i < size+1; i+=2){
        new_mass[i] = ptr_mass1[i];
        new_mass[i+1] = ptr_mass2[i+1];
    }
    return new_mass;
}


















