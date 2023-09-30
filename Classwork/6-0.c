#include <stdio.h>
#include <math.h>
#define _USE_MATH_DEFINES


float F(float x)
{
    return pow(x,2);
}

double res(double a,double b, double c)
{
    if ((a>=b) || (a>=c && b>c))
    {
       return a*b;
    }
   else
   {
       if ((b>=c) || (b>=a && c>a))
       {
           return c*b;
       }
       else return a*c;
   }
}

int main(void)
{
    //№1
    
     int yeas;
     scanf("%d",&yeas);
     double god = yeas % 4;
     if ((god == 0) && ((yeas % 400 == 0) || (yeas % 100 != 0))) printf("Год %d високосный\n",yeas);
     else printf("Год %d не високосный\n",yeas);
     
    //№2
    
    float x,func;
    scanf ("%f",&x);
    func = ((0 <= x) && (x <= 3)) ? printf("%f\n",F(x)) : printf("%d\n",4);
    
    //№3
   
    double a,b,c;
    puts("Введите a");
    scanf("%lf", &a);
    puts("Введите b");
    scanf("%lf", &b);
    puts("Введите c");
    scanf("%lf", &c);
    printf("%lf\n", res(a,b,c));
    
}
