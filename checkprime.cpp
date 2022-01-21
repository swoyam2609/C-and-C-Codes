#include<iostream>
using namespace std;
bool checkprime(int n){
    int b=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            b++;
        }
    }
    if(b==2){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    if(checkprime(n)){
        cout<<"It is prime";
    }
    else{
        cout<<"It is not prime";
    }
}