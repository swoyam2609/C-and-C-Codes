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
    int target;
    cin>>target;
    int trow, tcolumn;
    bool found=true;
    while(found){
        int i=0, j=column-1;
        if(arr[i][j]>target){
            j--;
        }
        if(arr[i][j]<target){
            i++;
        }
        if(arr[i][j]==target){
            trow=i;
            tcolumn=j;
            found=false;
        }
    }
    if(found){
        cout<<"Not found";
    }
    else{
        cout<<"element found at index: "<<trow<<" "<<tcolumn;
    }
    return 0;
}