#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the element number: "<<i<<" ";
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        int min=arr[i], b;
        for(int j=i;j<n;j++){
            if(arr[j]<min){
                min=arr[j];
                b=j;
            }
        }
        arr[b]=arr[i];
        arr[i]=min;
    }

    cout<<"The sorted array is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
