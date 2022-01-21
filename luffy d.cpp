#include<iostream>
#include<string>
using namespace std;

string getfinal(string s, int pos){
    int charpos=0;
    int intpos=1;
    string final="";
    int finalpos=s.size();
    while(charpos<finalpos && intpos<finalpos){
        int repeat=stoi(s.substr(intpos,1));
        for(int i=0;i<repeat;i++){
            final=final+s.substr(charpos,1);
        }
        charpos++;
        charpos++;
        intpos++;
        intpos++;
    }
    if((pos+1)>final.size()){
        return "-1";
    }
    return final.substr(pos,1);
}

int main(){
    string s;
    cin>>s;
    int n;
    cin>>n;
    cout<<getfinal(s,n-1);
    return 0;
}
