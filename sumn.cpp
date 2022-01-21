#include<iostream>
using namespace std;
int sumn(int n){
    int a=0;
    for(int i=1;i<=n;i++){
        a=a+i;
    }
    return a;
}

int main(){
    int n;
    cout<<"enter the number till which sum is required: ";
    cin>>n;
    cout<<"The required sum is :"<<sumn(n);
    return 0;
}