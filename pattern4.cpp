#include<iostream>
using namespace std;
int main(){
    int r, b, c=1;
    cout<<"Enter the number pf rows : ";
    cin>>r;
    b=r-1;
    while(b!=0){
        for(int i=1; i<=b; i++){
            cout<<"  ";
        }
        for(int i=1; i<=c; i++){
            cout<<"* ";
        }
        --b;
        ++c;
        cout<<endl;
    }
    return 0;
}