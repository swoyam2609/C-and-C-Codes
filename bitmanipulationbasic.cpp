#include<iostream>
using namespace std;
int getbit(int n, int pos){
    return ((n>>pos)&1);
}
int setbit(int n, int pos){
    return (n | (1<<pos));
}
int clearbit(int n, int pos){
    return (n & (~(1<<pos)));
}
int updatebit(int n, int pos){
    int m;
    cin>>m;
    if(m==0){
        return clearbit(n, pos);
    }
    else if(m==1){
        return setbit(n, pos);
    }
}
int main(){
    int n, pos;
    cin>>n;
    cin>>pos;
    cout<<updatebit(n, pos);
    return 0;
}