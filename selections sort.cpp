#include<iostream>
using namespace std;
void swap(int arr[], int a, int b){
    int temp=arr[a];
    arr[a]=arr[b];
    arr[b]=temp;
    return;
}

void selection_sort(int arr[], int n){
    for(int i=0;i<n;i++){
        int test=INT32_MAX;
        int index=0;
        for(int j=i;j<n;j++){
            if(arr[j]<test){
                test=arr[j];
                index=j;
            }
        }
        swap(arr, i, index);
    }
    return;
}

int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[n];
    }
    selection_sort(array, n);
    for(int i=0;i<n;i++){
        cout<<array[n]<<" ";
    }
    return 0;
}