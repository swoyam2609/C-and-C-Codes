#include<iostream>
#include<vector>
using namespace std;

void solve(vector<char> ch, int n){
    for(int i=0;i<n;i++){
        cout<<ch[i];
    }
}

int main(){
    int n;
    cin>>n;
    vector<char> ch;
    for(int i=0;i<n;i++){
        char c;
        cin>>c;
        ch.push_back(c);
    }
    solve(ch, n);
    return 0;
}
