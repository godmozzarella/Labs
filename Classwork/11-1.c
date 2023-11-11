#include <stdio.h>
#include <math.h>
#define N 10
////1
//int main(void)
//{
//    int A[N],B[N];
//    char c = ' ';
//    for(int i=0; i<10; ++i)
//    {
//        printf("a[%d] = ", i+1);
//        int temp;
//        scanf("%d", &temp);
//        A[i]=temp;
//
//    }
//    for(int i=0; i<10; ++i)
//    {
//        B[i] = A[i] + A[9];
//        printf("|%4c%5d%6c|%4c%5d%6c|%4c%5d%6c|\n",c,i,c,c,A[i],c,c,B[i],c);
//    }
//   printf("%.3f\n",(float)(A[0]+A[1]+A[2]+A[3]+A[4]+A[5]+A[6]+A[7]+A[8]+A[9])/N);
//}

//2

double F(double x)
{
    double y = pow(2,x) - 2 * pow(x,2) - 1;
    return y;
}

int main(void)
{
    
    float A[100],Aplus[100],Aminus[100],sumP=0,sumM=0;
    double z ,x = 2;
    int kp=0,km=0;
    scanf("%lf",&z);
    for (int i = 0;x<=4 && i<100; x+=z)
    {
        A[i] = F(x);
        i++;
    }
}
