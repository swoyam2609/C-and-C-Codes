#include<iostream>
using namespace std;

void swap(int arr[], int a, int b){
    int temp=arr[a];
    arr[a]=arr[b];
    arr[b]=temp;
}

int pivot(int arr[], int f, int l){
    int pi=arr[l];
    int i=f-1;
    for(int j=f;j<l;j++){
        if(arr[j]<pi){
            i++;
            swap(arr, i, j);
        }
    }
    swap(arr, i+1, l);
    return (i+1);
}

void quicksort(int arr[], int f, int l){
    if(f<l){
        int mid=pivot(arr, f, l);
        quicksort(arr, f, mid-1);
        quicksort(arr, mid+1, l);
    }

}

int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    quicksort(array, 0, n-1);
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    return 0;
}