#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    n--;
    int kristen=0;
    int count=0;
    for(int i=0;i<5;i++){
        int marks;
        cin>>marks;
        kristen+=marks;
    }
    for(int i=0;i<n;i++){
        int temp=0;
        for(int j=0;j<5;j++){
            int marks;
            cin>>marks;
            temp+=marks;
        }
        if(temp>kristen){
            count++;
        }
    }
    cout<<count;
}