#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;
    while(n!=0){
        for(int i=1; i<=n; i++){
            cout<<i<<"  ";
        }
        --n;
        cout<<endl;
    }
}