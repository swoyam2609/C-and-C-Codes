#include<iostream>
using namespace std;
int factor(int n){
    int array[n+1]={0};
    for(int i=2;i<=n;i++){
        if(array[i]==0){
            if(n%i==0){
                for(int j=i*i;j<=n;j+=i){
                    array[j]=1;
                }
                return i;
            }
        }
    }
}
int main(){
    int x;
    cin>>x;
    while(x!=1){
        cout<<factor(x)<<" ";
        x=x/factor(x);
    }
    return 0;
}