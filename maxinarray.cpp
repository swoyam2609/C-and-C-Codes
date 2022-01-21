#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int array1[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the "<<i+1<<"element of the array: ";
        cin>>array1[i];
    }

    int max=0;
    for(int i=0;i<n;i++){
        if(array1[i]>max){
            max=array1[i];
        }
    }
    cout<<"The greatest integer is: "<<max;
    return 0;
}