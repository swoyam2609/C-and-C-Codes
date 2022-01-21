#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int number=0, maximum=0;
    for(int i=0;i<n;i++){
        if(arr[i]>maximum && arr[i]>arr[i+1]){
            number++;
            maximum=arr[i];
        }
    }
    cout<<number;
    return 0;
}