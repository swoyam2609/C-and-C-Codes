#include<iostream>
using namespace std;

bool getbit(int i, int pos){
    return (i & (1<<pos)!=0);
}

bool setbit(int i, int pos){
    return (i | (1<<pos));
}

int unique(int arr[], int n){
    int num = 0;
    for(int i=0;i<64;i++){
        int sum = 0;
        for(int j=0;j<n;j++){
            if(getbit(arr[j], i)){
                sum++;
            }
        }
        if(sum%3!=0){
            num = setbit(num, i);
        }
    }
    return num;
}

int main(){
    int n;
    cin>>n;
    int array[n];
    for (int i = 0; i <n; i++){
        cin>>array[i];
    }
    cout<<unique(array, n);
    return 0;
    
}