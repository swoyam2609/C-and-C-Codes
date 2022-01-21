#include<bits/stdc++.h>
using namespace std;
int minPenalty(int size , int input[]){
    sort(input , input + size);
    int diff = 0 ;
    for(int i = 1 ; i < size; i++){
        diff +=(input[i-1] - input[i]);
    }
    return diff;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<minPenalty(n, arr);
    return 0;

}