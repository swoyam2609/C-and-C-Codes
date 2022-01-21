#include<iostream>
using namespace std;
int main(){
    unsigned long long int n, k;
    cin>>n>>k;
    unsigned long long int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(array[i]%k==0){
            count++;
        }
    }
    cout<<count;
    return 0;
}