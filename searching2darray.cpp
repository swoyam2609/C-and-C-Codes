#include<iostream>
using namespace std;
int main(){
    int row, column;
    cin>>row;
    cin>>column;
    int arr[row][column];
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cin>>arr[i][j];
        }
    }

    int key;
    cin>>key;

    bool found=false;
    int i, j;
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            if(arr[i][j]==key){
                found=true;
                break;
            }
        }
        if(found){
            break;
        }
    }

    if(found){
        cout<<"Element is found at "<<i<<" "<<j;
    }
    else{
        cout<<"Element is not found";
    }
    return 0;
}