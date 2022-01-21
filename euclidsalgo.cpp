#include<iostream>
using namespace std;
int hcf(int a, int b){
    int a1=max(a,b);
    int a2=min(a,b);
    int temp=a1%a2;
    while(temp!=0){
        a1=a2;
        a2=temp;
        temp=a1%a2;
    }
    return a2;
}

int main(){
    int a, b;
    cin>>a>>b;
    cout<<hcf(a,b);
    return 0;
}