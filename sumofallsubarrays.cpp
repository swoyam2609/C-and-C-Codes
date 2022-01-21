#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the length of the array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the element: ";
        cin>>arr[i];
    }
    int s=0;
    for(int start=0;start<n;start++){
        for(int stop=start;stop<n;stop++){
            for(int i=start;i<stop+1;i++){
                s+=arr[i];
            }
        }
    }
    cout<<"The sum of all the subarrays are: "<<s;
    return 0;
}