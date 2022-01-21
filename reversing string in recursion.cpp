#include<iostream>
#include<string>
using namespace std;

int reverse(string a, string b){
    if(a.size()==0){
        cout<<b;
        return 0;
    }
    else{
        b=a.substr(0,1)+b;
        a.erase(a.begin());
    }
    reverse(a, b);
}

int main(){
    string input, output="";
    cin>>input;
    reverse(input, "");
    return 0;
}