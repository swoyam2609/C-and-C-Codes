#include<iostream>
#include<vector>
using namespace std;

void solve(vector<int> &main, vector<vector<int>> &ans, int index){
    if(index==main.size()){
        ans.push_back(main);
        return;
    }
    for(int i=index;i<main.size();i++){
        if(i!=index && main[i]==main[index]){
            continue;
        }
        swap(main[i], main[index]);
        solve(main, ans, index+1);
        swap(main[i], main[index]);
    }
}

vector<vector<int>> permute(vector<int> &main){
    vector<vector<int>> ans;
    solve(main, ans, 0);
    return ans;
}

int main(){
    int n;
    cin>>n;
    vector<int> initialise;
    int a;
    for(int i=0;i<n;i++){
        cin>>a;
        initialise.push_back(a);
    }
    vector<vector<int>> ans = permute(initialise);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<initialise.size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}