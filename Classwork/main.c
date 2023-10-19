#include <stdio.h>
#include <math.h>


double F(double x)
{
    double y = pow(2,x) - 2 * pow(x,2) - 1;
    return y;
}


int main(void)
{
    //1
    
     int N,M;
     scanf("%d", &N);
     scanf("%d", &M);
     int S=0,k=1;
     for (int i=M; i>=N; i--)
     {
     S+=i;
     printf("выполнено %d раз\n", k++);
     }
     printf("%d\n",S);
     
    
    //2
    
    double z ,x = 2;
    scanf("%lf",&z);
    char v = ' ';
    for (;x<=4; x+=z)
    {
        puts("_________________________________________");
        printf("|%5c%lf%5c|%5c%lf%5c|\n",v,x,v,v,F(x),v);
    }
puts("_________________________________________\n");
   
    //3
    
    int a,n,s=1;
    scanf("%d",&a);
    scanf("%d",&n);
    for (int i=0;i<=n+1;i++) 
    {
        s*=(a+i);
    }
    printf("%d ",s);
    puts("\n");
}

