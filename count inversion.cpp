#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool myfunc(pair<int, int> a, pair<int, int> b){
    return (a.first<b.first);
}

int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int inv=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(array[i]>array[j] && i<j){
                inv++;
            }
        }
    }
    cout<<inv;
    return 0;
    
}