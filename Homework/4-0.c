#include <stdio.h>

double V(double v1,double v2,double v3)
{
    return v1+v2+v3;
}

double delt(double v1,double v2,double v3, double t1,double t2,double t3)
{
    return (v1*t1+v2*t2+v3*t3)/(v1+v2+v3);
}


int main(void)
{
    double v1,v2,v3;
    puts("Введите объем воды для сосудов 1,2 и 3 в литрах");
    scanf("%lf%lf%lf",&v1,&v2,&v3);
    double t1,t2,t3;
    puts("Введите температуру сосудов 1,2 и 3 в градусах");
    scanf("%lf%lf%lf",&t1,&t2,&t3);
    printf("Объем воды в сосуде - %lf\nТемпература воды в сосуде - %.3lf\n",V(v1,v2,v3),delt(v1,v2,v3,t1,t2,t3));
    
 
}
