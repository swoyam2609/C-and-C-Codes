#include<iostream>
using namespace std;
int main(){
    int p=1, q=1, r;
    cout<<"Enter the number: ";
    cin>>r;
    while(q!=r){
        for(int i=1; i<=p; i++){
            if(q==r){
                break;
            }
            cout<<q<<" ";
            q=q+1;
        }
        p=p+1;
        cout<<endl;
        if(q==r){
            break;
        }
    }
    return 0;
}