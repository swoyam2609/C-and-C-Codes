#include<iostream>
using namespace std;

bool issafe(int **arr, int i, int j, int n){
    if(i<n && j<n && arr[i][j]==1){
        return true;
    }
    else{
        return false;
    }
}

bool rat(int **arr, int i, int j, int n, int **sol){
    if(i==(n-1) && j==(n-1)){
        sol[i][j]=1;
        return true;
    }
    if(issafe(arr, i, j, n)){
        sol[i][j]=1;
        if(rat(arr, i+1, j, n, sol)){
            return true;
        }
        if(rat(arr, i, j+1, n, sol)){
            return true;
        }
        sol[i][j]=0;      //This step is known as backtracking
        return false;
    }
    return false;
}

int main(){
    int n;
    cin>>n;
    
    int **maze = new int *[n];
    for(int i=0;i<n;i++){
       maze[i]= new int[n]; 
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>maze[i][j];
        }
    }

    int **sol=new int *[n];
    for(int i=0;i<n;i++){
        sol[i]=new int[n];
        for(int j=0;j<n;j++){
            sol[i][j]=0;
        }
    }

    if(rat(maze, 0, 0, n, sol)){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<sol[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}