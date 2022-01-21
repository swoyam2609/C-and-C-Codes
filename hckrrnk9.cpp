#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]==','){
            cout<<endl;
            continue;
        }
        cout<<s[i];
    }
    return 0;
}