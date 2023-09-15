#include <stdio.h>
#define      D       2.54
#define   pulgada    2.32166
#define    smil      1.852
#define    vmil      1.609
#define    rmil      1.475
#define    olrumil   7.468
#define    geomil    7.4126

int main()
{
    
    //№1
    
    int num,A;
    puts("введите число 1");
    scanf("%d" , &num);
    printf("введено число %d\n", num);
    puts("введите число 2");
    scanf("%d" , &A);
    printf("введено число %d\n", A);
    printf(" >Сумма %d\n >Разность %d\n >Произведение %d\n >Частное %d\n >Остаток от деления %d\n", A+num,A-num,A*num,A/num,A%num);
    
    getchar();
    
    
    //№2
    
    int dym,edym;
    puts("введите значение для расчета");
    scanf ("%d", &dym);
    puts("введите значение для расчета исп.");
    scanf ("%d", &edym);
    float result = D * dym;
    printf(" >%d дюймов – это %.2f см\n",dym,result);
    float espres = pulgada * edym;
    printf(" >%d исп. дюймов – это %.2f см\n",edym,espres);
    
    
    
    //№2a
    
    int m1,m2,m3,m4,m5;
    float res1,res2,res3,res4,res5;
    puts("введите значение для расчета 1");
    scanf ("%d", &m1);
    puts("введите значение для расчета 2");
    scanf ("%d", &m2);
    puts("введите значение для расчета 3");
    scanf ("%d", &m3);
    puts("введите значение для расчета 4");
    scanf ("%d", &m4);
    puts("введите значение для расчета 5");
    scanf ("%d", &m5);
    
    res1 = smil * m1;
    printf(" >%d морских мили – это %.2f км\n",m1,res1);
    res2 = vmil * m2;
    printf(" >%d сухопутных мили – это %.2f км\n",m2,res2);
    res3 = rmil * m3;
    printf(" >%d римские мили – это %.2f км\n",m3,res3);
    res4 = olrumil * m4;
    printf(" >%d старорусские мили – это %.2f км\n",m4,res4);
    res5 = geomil * m5;
    printf(" >%d географические мили – это %.2f км\n",m5,res5);
    

 
//№3
    
    int a,b;
    puts("введите число a");
    scanf("%d", &a);
    puts("введите число b");
    scanf("%d", &b);
    char v = " ";
    printf("_________________________________________________________________________\n");
    printf("|%10.0sa*b%10.0s|%10.0sa+b%10.0s|%10.0sa-b%10.0s|\n",v,v,v,v,v,v);
    printf("_________________________________________________________________________\n");
    printf("|%11.0d*%-11.0d|%11.0d+%-11.0d|%11.0d-%-11.0d|\n",a,b,a,b,a,b);
    printf("_________________________________________________________________________\n");
    printf("|%12.0d%11.0s|%12.0d%11.0s|%12.0d%11.0s|\n",a*b,v,a+b,v,a-b,v);
    printf("_________________________________________________________________________\n");
    
  

}


/*
float name (int dym)
{
    float result = D * dym;
    return result;
}

int main()
{
    int dym;
    puts("введите значение для расчета");
    scanf ("%d", &dym);
    float result = D * dym;
    printf(" >%d дюймов – это %.2f см\n",dym,result);
    
}
*/
