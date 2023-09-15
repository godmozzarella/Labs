#include <stdio.h>
#include <math.h>
#define  g  9.8
#define  pi 3.14

int main()
{
//№2

    int a,b;
    puts("Введите стороны прямоугольника a и b");
    scanf("%d%d",&a,&b);
    printf(" > P = %d\n", 2*(a+b));
    printf(" > S = %d\n", a*b);
    
//№3
    
    int a3;
    puts("Введите ребро куба a3");
    scanf("%d",&a3);
    printf(" > V = %d\n", a3*a3*a3 );
    printf(" > S = %d\n", 6*(a3*a3) );
    
//№4
    
    int h,m,M = 5.9742 * pow(10, 24);
    puts ("Введите высоту и массу груза");
    scanf("%d%d",&h,&m);
    printf(" > F = %.5f\n", M*m*g/h/h);

//№5
    
    float U,R;
    puts ("Введите напряжение и сопротивление");
    scanf("%f%f", &U,&R);
    printf(" > I = %f\n", U/R);


//№24
    
    float w,r;
    puts("Введите угол - w и радиус - r");
    scanf("%f%f", &w,&r);
    float gr = w*180/pi;
    printf(" > L дуги = %.2f\n", pi*r*gr/180);
    printf(" > S = %.2f\n", pi*r*r*gr/360);
    printf(" > L хорды = %.2f\n", 2*r * sin(w/2));
    
}
