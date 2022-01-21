#include<iostream>
using namespace std;
int main(){
    int row, column;
    cin>>row>>column;
    int arr[row][column];
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cin>>arr[i][j];
        }
    }
    int newarr[column][row];
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            newarr[i][j]=arr[j][i];
            cout<<newarr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}