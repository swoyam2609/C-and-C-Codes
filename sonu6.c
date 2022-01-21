#include<stdio.h>
int main() {
  
    int r,n,temp,p=0;
    scanf("%d",&n);
    temp = n;
    while(temp>0)
    {
        r = temp %10;
        p= p + r;
        temp = temp /10;
    }
    
    printf("%d\n",p);
    return 0;
}