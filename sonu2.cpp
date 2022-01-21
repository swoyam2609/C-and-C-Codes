#include<iostream>
using namespace std;

int getinteger(int n){
    int count=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count%2==0){
        return 0;
    }
    else{
        return 1;
    }
}

int main(){
    int n;
    cin>>n;
    int ninfo=getinteger(n);
    int sample=n+1;
        while(true){
        if(getinteger(sample)!=ninfo){
            cout<<sample;
            break;
        }
        sample++;
    }
    return 0;
}