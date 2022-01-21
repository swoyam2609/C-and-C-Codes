#include<iostream>
using namespace std;
int Sumtilln(int n){
    if(n==1){
        return 1;
    }
    else{
        return (n + Sumtilln(n-1));
    }
}
int main(){
    int n;
    cin>>n;
    cout<<Sumtilln(n);
    return 0;
}