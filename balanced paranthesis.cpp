#include<bits/stdc++.h>
using namespace std;
bool check(string s){
    vector<char> arr;
    for(int i=0;i<s.size();i++){
        if(s[i]=='(' || s[i]=='{' || s[i]=='['){
            arr.push_back(s[i]);
        }
        else if(s[i]==')'){
            if(arr.size()!=0){
                if(arr[arr.size()-1]=='('){
                    arr.pop_back();
                }
                else{
                    return false;
                }
            }
            else{
                return false;
            }
        }
        else if(s[i]==']'){
            if(arr.size()!=0){
                if(arr[arr.size()-1]=='['){
                    arr.pop_back();
                }
                else{
                    return false;
                }
            }
            else{
                return false;
            }
        }
        else if(s[i]=='}'){
            if(arr.size()!=0){
                if(arr[arr.size()-1]=='{'){
                    arr.pop_back();
                }
                else{
                    return false;
                }
            }
            else{
                return false;
            }
        }
    }
    if(arr.size()==0){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int q;
    cin>>q;
    string str;
    for(int i=0;i<q;i++){
        string str;
        cin>>str;
        if(check(str)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }
    return 0;
}