#include<iostream>
#include<limits.h>
using namespace std;

int main(){
    int n, max;
    max=INT_MIN;
    
    
    cin>>n;
    int origin[n];
    for(int i=0;i<n;i++){
        cin>>origin[i];
        if(origin[i]>max){
            max=origin[i];
        }
    }
    
    
    max++;
    int freq[max]={0};
    int cumfreq[max]={0};
    for(int i=0;i<n;i++){
        int j=origin[i];
        freq[j]=freq[j]+1;
    }

    cout<<endl;
    int temp=0;

    for(int i=0;i<max;i++){
        cumfreq[i]=temp+freq[i];
        temp=cumfreq[i];
    }

    int sorted[n];
    for(int i=0;i<n;i++){
        int j=origin[i];
        cumfreq[j]=cumfreq[j]-1;
        sorted[cumfreq[j]]=origin[i];
    }

    for(int i=0;i<n;i++){
        cout<<sorted[i]<<" ";
    }
}