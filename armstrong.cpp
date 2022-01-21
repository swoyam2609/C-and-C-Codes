#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n, l, m=0;
    cout<<"Enter a number: ";
    cin>>n;
    l=n;
    while(l!=0){
        int b;
        b=l%10;
        m+=b*b*b;
        l=l/10;
    }
    if(m==n){
        cout<<"It is an armstron number.";
    }
    else{
        cout<<"It is not armstrong";
    }
}