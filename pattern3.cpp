#include<iostream>
using namespace std;
int main(){
    int r;
    cout<<"Enter the number of rows: ";
    cin>>r;
    while(r!=0){
        for(int i=1; i<=r; i++){
            cout<<"* ";
        }
        --r;
        cout<<endl;
    }
    return 0;

}