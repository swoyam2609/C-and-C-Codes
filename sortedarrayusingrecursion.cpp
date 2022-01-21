#include<iostream>
using namespace std;

bool check(int arr[], int n){
    if(n==2){
        return true;
    }
    if(arr[n-1]<arr[n-2]){
        return false;
    }
    else if(arr[n-1]>=arr[n-2]){
        check(arr, n-1);
    }
}

int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }

    if(check(array, n)){
        cout<<"Sorted";
    }
    else{
        cout<<"Not Sorted";
    }
    return 0;
}