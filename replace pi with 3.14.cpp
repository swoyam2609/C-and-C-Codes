#include<iostream>
#include<string>
using namespace std;

int replace(string a, int i){
    int n=a.size();
    if(i+1>n){
        cout<<a;
        return 0;
    }
    string pi="3.14";
    if(a[i]=='p' && a[i+1]=='i'){
        a.replace(i-1,2,pi);
    }
    replace(a, i+1);
}

int main(){
    string s;
    cin>>s;
    int n=s.size();
    replace(s, 0);
    return 0;
}