#include<iostream>
using namespace std;
bool check2(int n){
    if((n & (n-1))==0){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int n;
    cin>>n;
    cout<<check2(n);
    return 0;
}