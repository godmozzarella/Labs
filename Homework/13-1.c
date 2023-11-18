#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define N 100

void tolow(char* ptr_str);
int A(char* ptr_str);

int main (void)
{
    char str[N];
    puts("Введите текст:");
    fgets(str, N, stdin);
    char* ptr_str = str;
    tolow(ptr_str);
    int F = A(ptr_str);
    printf("В строке %d слов(a) начинающихся на 'a'\n",F);
}

void tolow(char*  ptr_str)
{
    for(int i = 0; i < strlen(ptr_str); ++i)
    {
        ptr_str[i] = tolower(ptr_str[i]);
    }
}

int A(char*ptr_str)
{
    int f = 0;
    if (ptr_str[0] == 'a') f++;
    for (int i = 0; i < strlen(ptr_str); i++)
    {
        if (ptr_str[i] == ' ' &&  ptr_str[i+1] == 'a') f++;
    }
    return f;
}

