#include<iostream>
using namespace std;

void swap(int arr[], int i, int j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    return;
}

int main(){
    int n;
    cin>>n;
    int dnfarray[n];
    for(int i=0;i<n;i++){
        cin>>dnfarray[i];
    }
    int low=0, mid=0, high=n-1;
    while(mid<high){
        if(dnfarray[mid]==0){
            swap(dnfarray, mid, low);
            mid++; low++;
        }
        else if(dnfarray[mid]==1){
            mid++;
        }
        else if(dnfarray[mid]==2){
            swap(dnfarray, mid, high);
            high--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<dnfarray[i]<<' ';
    }
    return 0;
}