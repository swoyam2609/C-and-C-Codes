#include<iostream>
#include<string>
using namespace std;

int StringCallenge(string s){
    int num=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
            continue;
        }
        else if((s[i]>=97 && s[i]<=122) || (s[i]>=65 && s[i]<=90)){
            num++;
        }
    }
    return (num);
}

int main(){
    string str;
    getline(cin, str);
    cout<<StringCallenge(str);
    return 0;
}