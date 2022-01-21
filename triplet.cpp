#include<iostream>
using namespace std;
bool checktrip(int a, int b, int c){
    if(a*a+b*b==c*c){
        return true;
    }
    else if(a*a+c*c==b*b){
        return true;
    }
    else if(b*b+c*c==a*a){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int a,b,c;
    cout<<"Enter the first side: ";
    cin>>a;
    cout<<"Enter the second side: ";
    cin>>b;
    cout<<"Enter the third side: ";
    cin>>c;
    if(checktrip(a,b,c)){
        cout<<"Yes, it is a pythagoras triplet.";
    }
    else{
        cout<<"No, it is not a pythagoras triplet";
    }
    return 0;
}