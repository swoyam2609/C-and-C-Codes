#include<iostream>
#include<math.h>
using namespace std;
void algorithm(unsigned long long int n){
    while(n!=1){
        if(n%2==0){
            n=n/2;
        }
        else{
            n=n*3+1;
        }
        cout<<" "<<n;
    }
}
int main(){
    unsigned long long int m;
    cin>>m;
    if(m<=0 || (m>=pow(10,6))){
        return 0;
    }
    else{
        cout<<m;
        algorithm(m);
    }
    return 0;
}