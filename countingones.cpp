#include<iostream>
using namespace std;
int countone(int m){
    int count=0;
    while(m!=0){
        m=(m & (m-1));
        count++;
    }
    return count;
}
int main(){
    int n;
    cin>>n;
    cout<<countone(n);
    return 0;
}