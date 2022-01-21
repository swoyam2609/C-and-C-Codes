#include<iostream>
#include<string>
using namespace std;
void dectobin(int n){
    int i;
    string s1="";
    while(n>0){
        s1=to_string(n%2)+s1;
        n/=2;
    }
    cout<<s1;
}

int main(){
    int m;
    cout<<"Enter the decimal number: ";
    cin>>m;
    cout<<"The corresponding binary number is: ";
    dectobin(m);
    return 0;
}