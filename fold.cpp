#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    int layer=pow(2,n);
    int pieces=layer*4;
    int final=layer + layer/2 + layer/2 + layer/4;
    cout<<layer;
    return 0;
}