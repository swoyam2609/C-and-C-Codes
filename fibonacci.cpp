#include<iostream>
using namespace std;
void fib(int n){
    int a=0, b=1;
    switch(n){
        case 1:
        cout<<a<<endl;
        break;

        case 2:
        cout<<a<<endl<<b<<endl;
        break;

        default:
        cout<<a<<endl<<b<<endl;
        for(int i=2;i<n;i++){
            int c=a+b;
            cout<<c<<endl;
            a=b;
            b=c;
        }
    }
    
}

int main(){
    int n;
    cout<<"Enter the number of terms: ";
    cin>>n;
    fib(n);
    return 0;
}