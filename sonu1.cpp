#include<iostream>
using namespace std;

int RecursionChallenge(int n){
    if(n==1){
        return 1;
    }
    return n*RecursionChallenge(n-1);
}

int main(){
    int n;
    cin>>n;
    cout<<RecursionChallenge(n);
    return 0;
}