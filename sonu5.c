#include<stdio.h>
int main()
{
    float bs,hra,da,gs;
    printf("enter value of basic salary");
    scanf("%f",&bs);
    da = (20*bs)/100.0;
    hra = (15*bs)/100.0;
    gs = bs + da + hra;
    printf("value of gross salary is %f",gs);
}