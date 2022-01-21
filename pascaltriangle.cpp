#include<iostream>
using namespace std;
int fact(int n){
    int a=1;
    for(int i=1;i<=n;i++){
        a=a*i;
    }
    return a;
}
int nCr(int a, int b){
    int ncr;
    ncr=fact(a)/(fact(b)*fact(a-b));
    return ncr;
}

int main(){
    int n;
    cout<<"Enter the number of rows";
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i==1){
            cout<<i;
        }
        else{
            for(int j=0;j<=i;j++){
            cout<<nCr(i,j)<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}