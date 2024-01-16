#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define N 10


int* full_elements(int* ptr_array, int n);
int* sort_buble(int* ptr_array, int n);
int* sort_shaker(int* ptr_array, int n);
int* sort_select(int* ptr_array, int n);
int* sort_insert(int* ptr_array, int n);
void print_array(int* ptr_array, int n);

int main(void){
    srand(time(NULL));
    int array[N], n = N, size = 10, arr1[size],arr2[size],arr3[size],arr4[size];
    int* ptr_array = array, *ptr_arr1 = arr1, *ptr_arr2 = arr2, *ptr_arr3 = arr3, *ptr_arr4 = arr4;
    full_elements(ptr_arr1, size);
    full_elements(ptr_arr2, size);
    full_elements(ptr_arr3, size);
    full_elements(ptr_arr4, size);
    clock_t start = clock();
    sort_buble(ptr_arr1, size);
    print_array(ptr_arr1, size);
    clock_t stop = clock();
    double t1 = (stop - start) * 1. / CLOCKS_PER_SEC;
    printf("Время: %lf\n", t1);
    start = clock();
    sort_shaker(ptr_arr2, size);
    print_array(ptr_arr2, size);
    stop = clock();
    double t2 = (stop - start) * 1. / CLOCKS_PER_SEC;
    printf("Время: %lf\n", t2);
    start = clock();
    sort_select(ptr_arr3, size);
    print_array(ptr_arr3, size);
    stop = clock();
    double t3 = (stop - start) * 1. / CLOCKS_PER_SEC;
    printf("Время: %lf\n", t3);
    start = clock();
    sort_insert(ptr_arr4, size);
    print_array(ptr_arr4, size);
    stop = clock();
    double t4 = (stop - start) * 1. / CLOCKS_PER_SEC;
    printf("Время: %lf\n", t4);
    puts("------------------------------\n");
}

int* full_elements(int* ptr_array, int n){
    for (int i = 0; i < n; ++i) ptr_array[i] =   10 + rand() % 50 ;
    return ptr_array;
}

int* sort_buble(int* ptr_array, int n){
    puts("------------------------------\n>пузырьковая сортировка\n");
    int k = n;
    for (int i = 0; i < n; ++i){
        k--;
        for (int j = 0; j < k; ++j){
            if (ptr_array[j + 1] < ptr_array[j]){
                int temp = ptr_array[j];
                ptr_array[j] = ptr_array[j + 1];
                ptr_array[j + 1] = temp;
            }
        }
    }
    return ptr_array;
}

int* sort_shaker(int* ptr_array, int n){
    puts("------------------------------\n>шейкерная сортировка\n");
    int iLeft = 0, iRight = n - 1;
    while ((iLeft <= iRight)){
        for (int i = iLeft; i < iRight; i++){
            if (ptr_array[i] > ptr_array[i + 1]){
                int temp = ptr_array[i];
                ptr_array[i] = ptr_array[i + 1];
                ptr_array[i + 1] = temp;
            }
        }
        iRight--;
        for (int i = iRight; i > iLeft; i--){
            if (ptr_array[i] < ptr_array[i - 1]){
                int temp = ptr_array[i];
                ptr_array[i] = ptr_array[i - 1];
                ptr_array[i - 1] = temp;
            }
        }
        iLeft++;
    }
    return ptr_array;
}

int* sort_select(int* ptr_array, int n){
    puts("------------------------------\n>сортировкa простым выбором\n");
    int k = n;
    for (int j = 0; j <= n - 1; ++j){
        int max = ptr_array[0];
        int nom = 0;
        for (int i = 1; i < k; ++i){
            if (ptr_array[i] > max){
                max = ptr_array[i];
                nom = i;
            }
        }
        int temp = ptr_array[k - 1];
        ptr_array[k - 1] = ptr_array[nom];
        ptr_array[nom] = temp;
        k--;
    }
    return ptr_array;
}

int* sort_insert(int* ptr_array, int n){
    puts("------------------------------\n>сортировки вставками\n");
    for (int i = 0; i < n; ++i){
        for (int j = i; j > 0 && ptr_array[j - 1] > ptr_array[j]; --j){
            int temp = ptr_array[j];
            ptr_array[j] = ptr_array[j - 1];
            ptr_array[j - 1] = temp;
        }
    }
    return ptr_array;
}

void print_array(int* ptr_array, int n){
    for (int i = 0; i < n; ++i){
            printf ("%d ", ptr_array[i]);
        }
    puts("\n");
}

int* full_array(int *, int);
