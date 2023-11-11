#include <stdio.h>

//Отношение количества четных значений элементов массива к числу положительных

int main(void)
{
    int n,q=0;
    puts("Введите кол-во элементов массива:");
    scanf("%d",&n);
    int A[n],k2=0,kp=0;
    for(int i=0; i<n; ++i)
    {
        printf("A[%d] = ", q);
        int t;
        scanf("%d", &t);
        A[i]=t;
        ++q;
    }
    for (int i=0; i<n; ++i)
    {
        if (A[i]%2==0) k2++;
    }
    for (int i=0; i<n; ++i)
    {
        if (A[i]>0) kp++;
    }
    printf(">%f\n",(float)k2/kp);
}
