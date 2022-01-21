#include<iostream>
using namespace std;
int fact(int n){
    int a=1;
    for(int i=1;i<=n;i++){
        a=a*i;
    }
    return a;
}

int main(){
    int n,m;
    cout<<"Enter the number : ";
    cin>>n;
    m=fact(n);
    cout<<"The factorial is: "<<m;
    return 0;
}