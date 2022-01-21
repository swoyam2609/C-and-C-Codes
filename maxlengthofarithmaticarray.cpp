#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the length of the array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the element: ";
        cin>>arr[i];
    }
    int pd=arr[1]-arr[0], curr=1, ans=0;
    for(int i=1;i<n;i++){
        if((arr[i+1]-arr[i])==pd){
            curr++;
        }
        else if((arr[i+1]-arr[i])!=pd){
            pd=(arr[i+1]-arr[i]);
            curr=1;
        }
        ans=max(ans,curr);
    }
    cout<<"The maximum length of arithmatic subarray is: "<<ans+1;
    return 0;
}