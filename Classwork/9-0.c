#include <stdio.h>
#include <math.h>
#define ROW 5
#define COL 1

int main (void)
{
    
//    //1
//    int row,col;
//    puts("\n");
//    for (row=1; row<=ROW;++row)
//    {
//        for (col=1;row>=col;col++)
//            printf ("%5d", row) ;
//        puts("\n");
//    }
//    
//    //2
//    
//    int x,n=0;
//    scanf("%d",&x);
//    
//    while (x>=1)
//    {
//        if ((x%10)%2==0) n+=1;
//        x/=10;
//    }
//    printf("В числе четных цифр - %d\n",n);
//    
//    
    //3
    
    char c;
    puts("Введите символ, из которого будет строиться фигура: ");
    scanf("%c",&c);
    int a;
    puts("Введите длину стороны 'a': ");
    scanf("%d",&a);
    double b = (a * ((sqrt(5)+1)/2));
    puts("\n");
    for (int y=0; y<b; ++y)
    {
        for (int x=0; x<a; ++x)
        {
            if (x > 0 && x < a-1 && y > 0 && y < b-1) printf ("%c",' ');
            else printf ("%c", c);
        }
        printf("\n");
    }
    printf("%d\n%lf\n",a,b);
    
    
}

