#include<iostream>
using namespace std;
int fibonacci(int n){
    n++;
    if(n==1){
        return 1;
    }
    
    else{
        return (fibonacci(n-1)+fibonacci(n-2));
    }
}
int main(){
    int m;
    cin>>m;
    
        cout<<fibonacci(m)<<" ";
    
    return 0;
}