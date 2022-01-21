#include<iostream>
using namespace std;
int main(){
    int r, c=1;
    cout<<"Enter the number of rows: "<<endl;
    cin>>r;
    for(int i=1; i<=r; i++){
        for(int b=1; b<=i; b++){
            cout<<c<<" ";
        }
        cout<<endl;
        ++c;
    }
    return 0;
}