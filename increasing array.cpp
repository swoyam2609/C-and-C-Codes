#include<iostream>
#include<math.h>
using namespace std;
int main(){
    unsigned long long int n;
    cin>>n;
    if(n<1||n>2*(pow(10,5))){
        return 0;
    }
    else{
        unsigned long long int arr[n];
        for(unsigned long long int i=0;i<n;i++){
            cin>>arr[i];
        }
        unsigned long long int count=0;
        for(unsigned long long int i=1;i<n;i++){
            if(arr[i]<arr[i-1]){
                count+=(arr[i-1]-arr[i]);
                arr[i]=arr[i-1];
            }
        }
        cout<<count;
        return 0;
    }
}