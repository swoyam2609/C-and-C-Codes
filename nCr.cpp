#include<iostream>
using namespace std;
int fact(int n){
    int a=1;
    for(int i=1;i<=n;i++){
        a=a*i;
    }
    return a;
}
int nCr(int a, int b){
    int ncr;
    ncr=fact(a)/(fact(b)*fact(a-b));
    return ncr;
}
int main(){
    int n,r;
    cout<<"Enter the value of N: ";
    cin>>n;
    cout<<"Enter the value of R: ";
    cin>>r;
    cout<<"The value of nCr is: "<<nCr(n,r);
    return 0;
}