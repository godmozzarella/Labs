#include <locale.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    puts("Введите имя:");
    char name[10], cho[] = "!";
    char Snew[100] = "Hello, ";
    scanf("%s", name);
    strcat(Snew, name);
    strcat(Snew, cho);
    puts("\n1.2");
    for(int i = 0; i < strlen(Snew); ++i)
    {
        printf("%c", toupper(Snew[i]));
    }
    puts("\n\n1.3");
    int i = (int)strlen(Snew);
    for (; i < 40; ++i)
    {
        strcat(Snew, cho);
    }
    printf("%s\n\n2\n",Snew);

    for (int i = 0;  i < strlen(Snew); ++i)
    {
        if (Snew[i] == 'a') Snew[i] = '@';
    }
    printf("%s\n\n",Snew);
}


