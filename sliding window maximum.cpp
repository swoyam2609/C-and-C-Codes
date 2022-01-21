#include<iostream>
#include<vector>
using namespace std;
int findmax(int arr[], int pos, int window){
    int value=INT16_MIN;
    for(int i=pos;i<(pos+window);i++){
        value=max(value, arr[i]);
    }
    return value;
}
int main(){
    int q,w;
    cin>>q>>w;
    int arr[q];
    for(int i=0;i<q;i++){
        cin>>arr[i];
    }
    for(int i=0;i<(q-w+1);i++){
        cout<<findmax(arr, i, w)<<" ";
    }
    return 0;
}