#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define N 100

////1
//int main(void){
//    int array[N][N];
//    int m,n, max = 0;
//    puts(">Введите кол-во строк массива:");
//    scanf("%d", &n);
//    puts(">Введите кол-во столбцов массива:");
//    scanf("%d", &m);
//    
//    for(int i = 0; i < n; ++i){
//        for(int j = 0; j < m; ++j){
//            array[i][j] = i+j;
//            
//        }
//    }
//    
//    for(int i = 0; i < n; ++i){
//        for(int j = 0; j < m; ++j){
//            printf("%d   ",  array[i][j]);
//        }
//        puts("\n");
//    }
//    
//    printf("%d\n", array[0][m-1]);
//    
//    puts(">Введите столбец массива в котором хотите искать:");
//    scanf("%d", &m);
//    for(int i = 0; i < n; ++i){
//        if (array[i][m-1] > max) max = array[i][m-1];
//    }
//    printf("Максимальный данного столбца - %d\n", max);
//    
//}

//2

//int main(void){
//    srand(time(NULL));
//    int array[7][7], k = 0, twins = 0, max = array[0][0];
//    int (*ptr_array)[7] = array;
//    for(int i = 0; i < 7; ++i){
//        for(int j = 0; j < 7; ++j){
//            array[i][j] = rand() % 21 - 10;
//        }
//    }
//    
//    for(int i = 0; i < 7; ++i){
//            for(int j = 0; j < 7; ++j){
//                printf("|%5d   ",  array[i][j]);
//            }
//            puts("|\n");
//        }
//    puts("\n\n");
//    
//    for(int j = 0; j < 7; ++j){
//            for(int i = 0; i < 7; ++i){
//                printf("|%5d   ",  array[i][j]);
//            }
//            puts("|\n");
//        }
//    
//    for(int i = 0; i < 7; ++i){
//            if (array[1][i] < -5) k++;
//        }
//    printf("Количество элементов второго столбца массива, меньших -5 - <%d>\n", k);
//    
//    for(int i = 0; i < 7; ++i){
//            for(int j = 0; j < 7; ++j){
//                if (array[i][j] == array[i][j+1]) twins++;
//            }
//        }
//    printf("Число одинаковых пар элементов, расположенных в одной строке - <%d>\n", twins);
//    
//    for(int i = 0; i < 7; ++i){
//            for(int j = 0; j < 7; ++j){
//                if (array[i][j] > max) max = array[i][j];
//            }
//        }
//    printf("Максимальный элемент - <%d>\n", max);
//    
//    for(int i = 7; i > 0; --i){
//        for(int j = 7; j > 0; --j){
//            if(array[i][j] == max) printf("Координаты максимального элемента - <%d> <%d>\n", i,j);
//        }
//    }
//}

int main(void)
{
    srand(time(NULL));
    int students[11][4], n = 11, m = 4, database[11];
    int all_1 = 0, all_2 = 0,all_3 = 0,all_4 = 0,all_5 = 0,all_6 = 0,all_7 = 0,all_8 = 0,all_9 = 0,all_10 = 0, all_11 = 0;
    for (int i = 0; i < n; ++i){
//        printf("Введиите кол-во учеников для параллели %d-x классов:\n", i + 1);
        for (int j = 0; j < m; j++){
//            printf(">Класс №%d: ", j + 1);
//            scanf("%d", &students[i][j]);
            students[i][j] = 10 + rand() % 50;
        }
    }
    
    for (int j = 0; j < m; ++j){
        all_1 += students[0][j];
    }
    database[0] = all_1;
    for (int j = 0; j < m; ++j){
        all_2 += students[1][j];
    }
    database[1] = all_2;
    for (int j = 0; j < m; ++j){
        
        all_3 += students[2][j];
    }
    database[2] = all_3;
    for (int j = 0; j < m; ++j){
        all_4 += students[3][j];
    }
    database[3] = all_4;
    for (int j = 0; j < m; ++j){
        all_5 += students[4][j];
    }
    database[4] = all_5;
    for (int j = 0; j < m; ++j){
        all_6 += students[5][j];
    }
    database[5] = all_6;
    for (int j = 0; j < m; ++j){
        all_7 += students[6][j];
    }
    database[6] = all_7;
    for (int j = 0; j < m; ++j){
        all_8 += students[7][j];
    }
    database[7] = all_8;
    for (int j = 0; j < m; ++j){
        all_9 += students[8][j];
    }
    database[8] = all_9;
    for (int j = 0; j < m; ++j){
        all_10 += students[9][j];
    }
    database[9] = all_10;
    for (int j = 0; j < m; ++j){
        all_11 += students[10][j];
    }
    database[10] = all_11;
    
    int min_parallel = database[0];
    
    for (int i = 0; i < 11; ++i){
        if (min_parallel > database[i]) min_parallel = database[i];
    }
    
    printf("Параллель с самым минимальным кол-ом учащихся содержит %d учеников\n", min_parallel);
    
}


