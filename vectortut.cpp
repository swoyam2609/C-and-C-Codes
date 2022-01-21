#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
}

int main(){
    vector<int> vec1;
    int ele;
    for(int i=0;i<5;i++){
        cin>>ele;
        vec1.push_back(ele);
    }
    display(vec1);
    return 0;
}