#include<iostream>
using namespace std;
void two_unique(int arr[], int n){
    int num=0;
    for (int i=0;i<n;i++){
        num=num^arr[i];
    }
    int pos=0;
    while(((num>>pos)&1)==0){
        pos++;
    }
    for(int i=0;i<n;i++){
        if(((arr[i]>>pos)&1)){
            num=num^arr[i];
        }
    }
    cout<<num<<" ";
    for (int i=0;i<n;i++){
        num=num^arr[i];
    }
    cout<<num;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    two_unique(arr, n);
    return 0;
}