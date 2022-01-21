#include<iostream>
using namespace std;
int binsearch(int arr[], int n, int key){
    int s=0, e=n;
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            s=mid+1;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
    }
    return -1;
}

int main(){
    int n;
    cout<<"Enter the length of the array: ";
    cin>>n;
    int a[n];
    for(int i=1;i<=n;i++){
        cout<<"Enter the element no. "<<i<<": ";
        cin>>a[i];
    }
    int key;
    cout<<"Enter the element to be searched for: ";
    cin>>key;
    int b=binsearch(a, n, key);
    if(b==-1){
        cout<<"Element not found";
    }
    else{
        cout<<"Element found at index: "<<b-1<<endl;
        cout<<"Element found at Position: "<<b;
    }
    return 0;
}