#include<iostream>
using namespace std;
int main(){
    int row, column;
    cin>>row>>column;
    int main_arr[row][column];
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cin>>main_arr[i][j];
        }
    }
    int transpose_arr[column][row];
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            transpose_arr[j][i]=main_arr[i][j];
        }
    }
    for(int i=0;i<column;i++){
        for(int j=0;j<column;j++){
            cout<<transpose_arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}