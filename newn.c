#include <stdio.h>
void main()
{
    int a, rem, sum = 0;
    printf("Enter the number:");
    scanf("%d", &a);
    while (a>0)
    {
        rem = a%10;
        sum = sum+rem;
        a = a/10;
    }
    printf("The sum of the digits is %d", sum);
}