#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int low=0, high=n-1;
    int k;
    cin>>k;
    int pairsum=arr[low]+arr[high];
    while(pairsum!=k){
        if(pairsum<k){
            low++;
        }
        if(pairsum>k){
            high--;
        }
        pairsum=arr[low]+arr[high];
    }
    if(pairsum==k){
        cout<<"True"<<endl<<arr[low]<<" "<<arr[high];
    }
    else{
        cout<<"False";
    }
    return 0;
}