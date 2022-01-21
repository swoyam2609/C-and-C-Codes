#include<iostream>
using namespace std;
int main(){
    int n, m=0;
    cin>>n;
    do{
        int b;
        b=n%10;
        m=(m*10)+b;
        n=n/10;
    }while(n!=0);
    cout<<m;
}