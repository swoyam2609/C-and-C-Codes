#include<iostream>
#include<cmath>
using namespace std;
int bintodec(int n){
    int a, b=0, y=0;
    while(n>0){
        int x=n%10;
        y+=x*(pow(8,b));
        n=n/10;
        ++b;
    }
    return y;
}

int main(){
    int n;
    cout<<"Enter the octal number: ";
    cin>>n;
    cout<<"The corresponding decimal number is : "<<bintodec(n);
    return 0;
}