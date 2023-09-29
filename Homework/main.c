#include <stdio.h>
#include <math.h>
#define _USE_MATH_DEFINES
#define t  0.5
#define e 2.71828182845904

double F (double x,double y)
{
    double res = (pow(sin(x),3) + log(2 * y + 3 * x))/(pow (t,e) + sqrt(x));
    return res;
}



int  main(void)
{
    double x, y;
    scanf ("%lf\n%lf\n",&x,&y);
    printf ("> %lf\n", F(x,y));
    
}

//F(2,0.0000015) = 1.624082
//F(4,2) = 1.086979
