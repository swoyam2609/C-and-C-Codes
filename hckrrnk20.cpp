#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> arr;
    vector<int> arr1;
    for(int i=0;i<9;i++){
        int ele;
        cin>>ele;
        arr1.push_back(i+1);
        arr.push_back(ele);
    }
    sort(arr.begin(),arr.end());
    int result=0;
    for(int i=0;i<9;i++){
        if(arr[i]!=arr1[i]){
            if(arr[i]>arr1[i]){
                result+=(arr[i]-arr1[i]);
            }
            else if(arr[i]<arr1[i]){
                result+=(arr1[i]-arr[i]);
            }
        }
    }
    cout<<result;
    
    return 0;
}