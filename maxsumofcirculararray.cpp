#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int arrsum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        arrsum+=arr[i];
    }
    int arrn[n];
    int currsum=0, maxsum=0;
    for(int i=0; i<n; i++){
        arrn[i]=(-1)*arr[i];
        currsum+=arrn[i];
        if(currsum<0){
            currsum=0;
        }
        maxsum=max(maxsum, currsum);
    }
    maxsum=arrsum+maxsum;
    cout<<maxsum;
    return 0;
}