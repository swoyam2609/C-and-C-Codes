#include<iostream>
#include<string>
#include<vector>
using namespace std;
int check(string s){
    int zero=0;
    int one=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='0'){
            zero++;
        }
        else{
            one++;
        }
    }
    int ans=min(zero,one);
    if(ans<2){
        return 0;
    }
    return (ans-1);
}
int main(){
    int n;
    cin>>n;
    vector<int> temp;
    int t;
    for(int i=0;i<n;i++){
        cin>>t;
        temp.push_back(t);
    }
    string s;
    for(int i=0;i<n;i++){
        cin>>s;
        cout<<check(s)<<endl;
    }
    return 0;
}