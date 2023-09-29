#include <stdio.h>

int main(void){
    
     //№1
     char c;
     scanf("%c",&c);
     int i;
     scanf("%d",&i);
     float f;
     scanf("%f",&f);
     double d;
     scanf("%lf",&d);
     printf("%c\n%d\n%.2f\n%.e\n\n",c,i,f,d);
     
     //№1а
     float a;
     scanf("%f",&a);
     int b = (int) a;
     float b1 = a-b ;
     printf("%d\n%f\n\n",b,b1);
     
     //№1б
     int h;
     scanf("%d", &h);
     printf("%x\n%d\n\n",h,h);
     
    //№1в
    char I = 'i';
    float res = 1/(float)I;
    printf("%f\n\n",res);
    
    //№2
    int A, B;
    scanf("%d%d",&A,&B);
    printf("%f\n\n",(float)A/B);
    
    //№3
    int N,n1,n2,n3,inv;
    scanf("%d",&N);
    n1 = N/100;
    n3 = N%10;
    n2 = N/10-N/100*10;
    inv = n3*100+n2*10+n1;
    printf("\na)Последняя цифра - %d\nb)Первая цифра - %d\nc)Сумма цифр числа - %d\n*)Число наоборот - %03d\n\n",n3,n1,n1+n2+n3,inv);
    
}
