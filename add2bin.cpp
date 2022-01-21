#include<iostream>
#include<cmath>
using namespace std;
int bintodec(int n){
    int a, b=0, y=0;
    while(n>0){
        int x=n%10;
        y+=x*(pow(2,b));
        n=n/10;
        ++b;
    }
    return y;
}

int main(){
    int a,b,c,d;
    cout<<"Enter the first number : ";
    cin>>a;
    cout<<"Enter the seconfd binary number :";
    cin>>b;
    c=bintodec(a);
    d=bintodec(b);
    int e=c+d;
    cout<<"The sum of the number is: "<<e;
    return 0;
}