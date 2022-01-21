#include<iostream>
using namespace std;

void merge(int arr[], int f, int mid, int l){
    int l1=mid-f+1;
    int l2=l-mid;
    int temp1[l1];
    int temp2[l2];
    for(int i=0;i<l1;i++){
        temp1[i]=arr[f+i];
    }
    for(int i=0;i<l1;i++){
        temp1[i]=arr[mid+1+i];
    }
    int i1=0, i2=0, key=f;
    while(i1<l1 || i2<l2){
        if(temp1[i1]<temp2[i2]){
            arr[key]=temp1[i1];
            key++;i1++;
        }
        else{
            arr[key]=temp2[i2];
            key++;i2++;
        }
    }
}

void mergesort(int arr[], int f, int l){
    if(f<l){
        int mid=(f+l)/2;
        mergesort(arr, f, mid);
        mergesort(arr, mid+1, l);
        merge(arr, f, mid, l);
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
    mergesort(array, 0, n-1);
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    return 0;
}