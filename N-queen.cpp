#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> board;

bool check(int x, int y){
    int i=x, j=y;
    while(i>=0 && j>=0 && j<board.size()){
        if(board[i][j]==1){
            return false;
        }
        i--;
    }
    i=x; j=y;
    while(i>=0 && j>=0 && j<board.size()){
        if(board[i][j]==1){
            return false;
        }
        i--; j--;
    }
    i=x; j=y;
    while(i>=0 && j>=0 && j<board.size()){
        if(board[i][j]==1){
            return false;
        }
        i--; j++;
    }
    return true;
}

bool solve(int x, int n){
    if(x>=n){
        return true;
    }
    for(int y=0; y<n; y++){
        if(check(x, y)){
            board[x][y]=1;
            if(solve(x+1, n)){
                return true;
            }
            board[x][y]=0;
        }
    }
    return false;
}

int main(){
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        vector<int> vec = {};
        for(int j=0;j<n;j++){
            vec.push_back(0);
        }
        board.push_back(vec);
    }

    solve(0, n);

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}