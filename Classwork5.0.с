#include <stdio.h>
#include <math.h>
#define _USE_MATH_DEFINES


int main()
{
    
     //№1
     
     double  gr;
     puts("№1\nВведите градус угла");
     scanf("%lf",&gr);
     double rad = gr * M_PI / 180;
     printf("%.6lf\n%lf\n",rad,sin(rad));
     
     
    //№2
    
    double a,b,x,t=-6;
    puts ("\n№2\nВведите значение x");
    scanf("%lf",&x);
    a = log(x);
    b = sqrt(pow(x,2) + pow(t,2));
    double y = pow(fabs( a - b * x),0.2);
    printf("y = %.4lf\n",y);
    
    //№3
    
    int A = (int)a, B = (int)b, C = (int)y;
    int result = (((A % 2) == 0 && (B % 2) != 0) || ((B % 2) == 0 && (A % 2) != 0)) && (((A % 3) == 0) && ((B % 3) == 0) && ((C % 3) == 0));
    printf("\n№3\nA = %d\nB = %d\nC = %d\nусловие выполнено (1 - да, 0 - нет) -- <%d>\n\n",A,B,C,result);
}
   




