#include<iostream>
using namespace std;
int main(){
    int row1, column1;
    cin>>row1>>column1;
    int arr1[row1][column1];
    for(int i=0;i<row1;i++){
        for(int j=0;j<column1;j++){
            cin>>arr1[i][j];
        }
    }
    int row2, column2;
    cin>>row2>>column2;
    int arr2[row2][column2];
    for(int i=0;i<row2;i++){
        for(int j=0;j<column2;j++){
            cin>>arr2[i][j];
        }
    }
    if(column1!=row2){
        return 0;
    }
    else{
        int arr3[row1][column2];
        for(int i=0;i<row1;i++){
            for(int j=0;j<column2;j++){
                int sum=0;
                for(int k=0;k<column1;k++){
                    sum=sum+arr1[i][k]*arr2[k][j];
                }
                arr3[i][j]=sum;
            }
        }
        for(int i=0;i<row1;i++){
            for(int j=0;j<column2;j++){
                cout<<arr3[i][j]<<" ";
            }
            cout<<endl;
        }
        return 0;
    }
}