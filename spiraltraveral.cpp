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
    int row_start=0, row_stop=row-1, column_start=0, column_stop=column-1;
    bool done = row_start<=row_stop && column_start<=column_stop;
    while(done){
        if(row_start<=row_stop && column_start<=column_stop){
            for(int j=column_start;j<=column_stop;j++){
                cout<<arr[row_start][j]<<" ";
            }
            row_start++;
        }
        if(row_start<=row_stop && column_start<=column_stop){
            for(int i=row_start;i<=row_stop;i++){
                cout<<arr[i][column_stop]<<" ";
            }
            column_stop--;
        }
        if(row_start<=row_stop && column_start<=column_stop){
            for(int j=column_stop;j>=column_start;j--){
                cout<<arr[row_stop][j]<<" ";
            }
            row_stop--;
        }
        if(row_start<=row_stop && column_start<=column_stop){
            for(int i=row_stop;i>=row_start;i--){
                cout<<arr[i][column_start]<<" ";
            }
            column_start++;
        }
        else{
        done=false;
        }
    }
    return 0;
}