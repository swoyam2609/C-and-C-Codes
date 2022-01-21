#include<bits/stdc++.h>
using namespace std;

bool is_safe(int** arr, int cx, int cy, int n){
    if(cx>=0 && cx<n && cy>=0 && cy<n && arr[cx][cy]=='.'){
        return true;
    }
    return false;
}

bool travel(int** arr, int cx, int cy, int fx, int fy, int n){
    if(cx==fx && cy==fy){
        return true;
    }
    if(is_safe(arr, cx, cy, n)){
        arr[cx][cy]='o';
        if(travel(arr, cx+1, cy, fx, fy, n)){
            return true;
        }
        if(travel(arr, cx-1, cy, fx, fy, n)){
            return true;
        }
        if(travel(arr, cx, cy+1, fx, fy, n)){
            return true;
        }
        if(travel(arr, cx, cy-1, fx, fy, n)){
            return true;
        }
        arr[cx][cy]='.';
        return false;
    }
}

int main(){
    int n;
    cin>>n;
    int** arr = new int*[n];
    for(int i=0;i<n;i++){
        arr[i] = new int[n];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int cx,cy,fx,fy;
    cin>>cx>>cy>>fx>>fy;
    if(travel(arr, cx, cy, fx, fy, n)){
        cout<<"Travelable"<<endl;
    }
    else{
        cout<<" Not Travelable"<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}