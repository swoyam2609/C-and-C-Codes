#include<iostream>
using namespace std;
int main(){
    int n, m=0;
    cout<<"Enter the number that is to be checked: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        if(n%i==0){
            ++m;
        }
    }
    switch(m){
        case 1:
        cout<<"It is ONE";
        break;

        case 2:
        cout<<"It is a prime number";
        break;

        default:
        cout<<"It is a composite number";
        break;
    }
    return 0;
}