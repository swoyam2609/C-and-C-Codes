#include<iostream>
#include<math.h>
using namespace std;
int main(){
    long int n;
    cin>>n;
    if(n<2||n>2*(pow(10,5))){
        return 0;
    }
    else{
        long int arrcheck[n];
        for(int i=0;i<n;i++){
            arrcheck[i]=i+1;
        }
        for(int i=0;i<n-1;i++){
            long int tmp;
            cin>>tmp;
            arrcheck[tmp-1]=0;
        }
        for(int i=0;i<n;i++){
            if(arrcheck[i]!=0){
                cout<<arrcheck[i];
            }
        }
    }
    return 0;
}