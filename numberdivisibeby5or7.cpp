#include<iostream>
using namespace std;
int check(int n, int a, int b){
    int count = 0;
    for(int i=1;i<=n;i++){
        if(i%a==0){
            count++;
        }
    }
    for(int i=1;i<=n;i++){
        if(i%b==0){
            count++;
        }
    }
    for(int i=1;i<=n;i++){
        if(i%(a*b)==0){
            count--;
        }
    }
    return count;
}
int main(){
    int n;
    cin>>n;
    int a,b;
    cin>>a>>b;
    cout<<check(n,a,b);
    return 0;
}