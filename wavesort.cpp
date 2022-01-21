#include<iostream>
using namespace std;

void swap(int arr[], int i, int j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    return;
}

void wavesort(int arr[], int n){
    for(int i=1;i<n;i+=2){
        if(arr[i]>arr[i-1]){
            swap(arr, i, i-1);
        }
        if(arr[i]>arr[i+1] && i<n-2){
            swap(arr, i, i+1);
        }
    }
    return;
}

int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    wavesort(array, n);
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    return 0;
}