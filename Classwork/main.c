#include <stdio.h>
#include <math.h>
int main(void)
{
//1

//char С;
//printf("Введите цифру или букву: ");
//scanf("%c", &С);//считывание с консоли
//switch (С)
//{
//    case '1':
//        printf("Это цифра\n");
//        break;
//    case '2':
//        printf("Это цифра\n");
//        break;
//    case '3':
//        printf("Это цифра\n");
//        break;
//    case '4':
//        printf("Это цифра\n");
//        break;
//    case '5':
//        printf("Это цифра\n");
//        break;
//    case '6':
//        printf("Это цифра\n");
//        break;
//    case '7':
//        printf("Это цифра\n");
//        break;
//    case '8':
//        printf("Это цифра\n");
//        break;
//    case '9':
//        printf("Это цифра\n");
//        break;
//    case '0':
//        printf("Это цифра\n");
//        break;
//    default:
//        printf("Это буква\n");
//}
//return 0;

//2

float x,y;
char c;
puts("Введите операцию для x и y");
scanf("%f%c%f",&x,&c,&y);
switch (c)
{
    case '+':
        printf("= %f\n",x+y);
        break;
    case '-':
        printf("= %f\n",x-y);
        break;
    case '*':
        printf("= %f\n",x*y);
        break;
    case '/':
        printf("= %f\n",x/y);
        break;
    case '^':
        printf("= %f\n",pow(x,y));
    default:
        puts("Неизвестное действие\n");
}
return 0;


//3

    char n;
    puts("Введите букву");
    scanf("%c",&n);
    switch(n)
    {
        case 'a':
            printf("Порядковый номер буквы %c - %d\n",n,1);
            break;
        case 'b':
            printf("Порядковый номер буквы %c - %d\n",n,2);
            break;
        case 'c':
            printf("Порядковый номер буквы %c - %d\n",n,3);
            break;
        case 'd':
            printf("Порядковый номер буквы %c - %d\n",n,4);
            break;
        case 'e':
            printf("Порядковый номер буквы %c - %d\n",n,5);
            break;
        case 'f':
            printf("Порядковый номер буквы %c - %d\n",n,6);
            break;
        case 'g':
            printf("Порядковый номер буквы %c - %d\n",n,7);
            break;
        case 'h':
            printf("Порядковый номер буквы %c - %d\n",n,8);
            break;
        case 'i':
            printf("Порядковый номер буквы %c - %d\n",n,9);
            break;
        case 'j':
            printf("Порядковый номер буквы %c - %d\n",n,10);
            break;
        case 'k':
            printf("Порядковый номер буквы %c - %d\n",n,11);
            break;
        case 'l':
            printf("Порядковый номер буквы %c - %d\n",n,12);
            break;
        case 'm':
            printf("Порядковый номер буквы %c - %d\n",n,13);
            break;
        case 'n':
            printf("Порядковый номер буквы %c - %d\n",n,14);
            break;
        case 'o':
            printf("Порядковый номер буквы %c - %d\n",n,15);
            break;
        case 'p':
            printf("Порядковый номер буквы %c - %d\n",n,16);
            break;
        case 'q':
            printf("Порядковый номер буквы %c - %d\n",n,17);
            break;
        case 'r':
            printf("Порядковый номер буквы %c - %d\n",n,18);
            break;
        case 's':
            printf("Порядковый номер буквы %c - %d\n",n,19);
            break;
        case 't':
            printf("Порядковый номер буквы %c - %d\n",n,20);
            break;
        case 'u':
            printf("Порядковый номер буквы %c - %d\n",n,21);
            break;
        case 'v':
            printf("Порядковый номер буквы %c - %d\n",n,22);
            break;
        case 'w':
            printf("Порядковый номер буквы %c - %d\n",n,23);
            break;
        case 'x':
            printf("Порядковый номер буквы %c - %d\n",n,24);
            break;
        case 'y':
            printf("Порядковый номер буквы %c - %d\n",n,25);
            break;
        case 'z':
            printf("Порядковый номер буквы %c - %d\n",n,26);
            break;
        default:
            puts("Неизвестная буква");
    }
    
}

