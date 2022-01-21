#include<iostream>
#include<string>
using namespace std;
string upper(string str){
    for(int i=0;i<str.size();i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i]=str[i]-('a'-'A');
        }
    }
    return str;
}
string lower(string str){
    for(int i=0;i<str.size();i++){
        if(str[i]>='A' && str[i]<='Z'){
            str[i]=str[i]-('A'-'a');
        }
    }
    return str;
}
int main(){
    string s;
    getline(cin, s);
    string s1=upper(s);
    string s2=lower(s);
    cout<<"Upper string is: "<<s1<<endl;
    cout<<"Lower string is: "<<s2<<endl;
    return 0;
}