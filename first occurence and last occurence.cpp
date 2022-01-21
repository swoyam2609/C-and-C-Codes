#include<iostream>
using namespace std;

int firstpos(int arr[], int n, int i, int find){
    if(i==n){
        return -1;
    }
    if(arr[i]==find){
        return i;
    }    
    firstpos(arr, n, i+1, find);
}

int lastpos(int arr[], int length, int find){
    int i=length-1;
    if(arr[i]==find){
        return i;
    }
    else{
        lastpos(arr, (length-1), find);
    }
}

int main(){
    int n, i=0;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[n];
    }
    int find;
    cin>>find;
    cout<<firstpos(array, i, 0, find)<<endl;
    cout<<lastpos(array, n, find);
    return 0;
}