#include <stdio.h>
#include <math.h>
double cor(double x, double y)
{
    if (((pow(sqrt(y),2) <= sqrt(25-pow(sqrt(x),4))) || (fabs(y) <= -(pow(sqrt(-x),2) - 5))))
    {
        return puts("Точка принадлежит области");
    }
    else return puts("Точка не принадлежит области");
}


int main(void)
{
    double x,y;
    scanf("%lf%lf",&x,&y);
    cor(x,y);
    
}
