#include<iostream>
using namespace std;
void solve(int a, int b){
    cout<<a+b<<endl;
    if(a>b){
        cout<<a-b;
    }
    else{
        cout<<b-a;
    }
    return;
}
int main(){
    int a, b;
    cin>>a>>b;
    solve(a,b);
    return 0;
}