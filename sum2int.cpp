#include<iostream>
using namespace std;
int add(int a, int b){
    int l;
    l=a+b;
    return l;
}

int main(){
    cout<<"Enter first number : ";
    int a,b;
    cin>>a;
    cout<<"Enter the second number :";
    cin>>b;
    int c=add(a,b);
    cout<<"Their sum is : "<<c;
    return 0;
}