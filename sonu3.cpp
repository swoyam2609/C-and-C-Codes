#include<iostream>
#include<string>
#include<vector>
using namespace std;

vector<string> alph{"A", "B", "C", "D", "E", "F", "G", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z"};

bool check(string s){
    vector<string> alph2(alph.begin(), alph.end());
    for(int i=0;i<=s.size()-1;i++){
        int pos=find(alph2.begin(), alph2.end(), s[i]);
        alph2.erase(alph2.begin()+pos);
    }
    if(alph2.size()==0){
        return true;
    }
    return false;
}

int solve(string s){
    int first=0;
    int last=s.size()-1;
    while(true){
        if(check(s.substr(first, last-first)){
            
        }
    }

}

int main(){
    string sample="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string in;
    cin>>in;
    for(int i=0; i<in.size(); i++){

    }
}