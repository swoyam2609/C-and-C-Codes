#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char arr[n+1];
    cin>>arr;
    int i=0;
    bool palindrome=true;
    while(i<=n/2){
        if(arr[i]!=arr[n-1-i]){
            palindrome=false;
            break;
        }
        i++;
    }
    if(palindrome){
        cout<<arr<<" is a palindrome.";
    }
    else{
        cout<<arr<<" is not a palindrome.";
    }
    return 0;
}