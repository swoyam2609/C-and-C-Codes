#include<bits/stdc++.h>
using namespace std;

bool check( vector<pair<int,int>> arr, int pos){
    int fuel=0, next=0;
    int currentpos=pos;
    while(true){
        fuel+=arr[currentpos].first;
        next=arr[currentpos].second;
        if(next>fuel){
            return false;
        }
        else{
            
        }
    }
}

int main(){
    int stops;
    cin>>stops;
    vector<pair<int,int>> arr;
    for(int i=0;i<stops;i++){
        int fuel, distance;
        cin>>fuel>>distance;
        arr.push_back(make_pair(fuel,distance));
    }
}