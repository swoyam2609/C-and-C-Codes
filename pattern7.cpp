#include<iostream>
using namespace std;
int main(){
    int a, b=1;
    cout<<"Enter the number of columns: ";
    cin>>a;
    a=a%2==0?a:a+1;
    while(b!=(a/2)){
        for(int i=1; i<=b; i++){
            cout<<"* ";
        }
        for(int i=1; i<=(a-2*b); i++){
            cout<<"  ";
        }
        for(int i=1; i<=b; i++){
            cout<<"* ";
        }
        ++b;
        cout<<endl;  
    }
    while(b!=0){
        for(int i=1; i<=b; i++){
            cout<<"* ";
        }
        for(int i=1; i<=(a-2*b); i++){
            cout<<"  ";
        }
        for(int i=1; i<=b; i++){
            cout<<"* ";
        }
        --b;
        cout<<endl; 
    }
    return 0;
}