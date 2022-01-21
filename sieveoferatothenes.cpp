#include<iostream>
using namespace std;
void printprime(int n){
    int arrar[n+1]={0};
    for(int i=2;i<=n;i++){
        if(arrar[i]==0){
            if(n%i==0){
                for(int j=(i*i);j<=50;j+=i){
                    arrar[j]=1;
                }
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(arrar[i]==0){
            cout<<i<<" ";
        }
    }
}

int main(){
    int n;
    cin>>n;
    printprime(n);
    return 0;
}

