#include<iostream>
using namespace std;
int main(){
    unsigned int x;
    cin>>x;
    unsigned int arr[x];
    for(int i=0;i<x;i++){
        unsigned int a,b;
        cin>>a>>b;
        arr[i]=a+b;
    }
    for(int i=0;i<x;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}