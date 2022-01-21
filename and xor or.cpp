#include<bits/stdc++.h>
#include<limits.h>
using namespace std;

int solve(int a, int b){
    return (((a & b)^(a | b))&(a^b));
}

int ans(int arr[], int n, int i, int j){
    int first_low = 100;
    int second_low = 100;
    for(int a=i;a<=j;a++){
        if(arr[a]<first_low){
            second_low=first_low;
            first_low=arr[a];
        }
    }
    return solve(first_low,second_low);
}

int maxi(int arr[], int n){
    int maxl=0;
    for(int i=0;i<(n-1);i++){
        for(int j=(i+1);i<n;j++){
            maxl=max(maxl, ans(arr, n, i, j));
        }
    }
    return maxl;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<maxi(arr, n);
    return 0;
}