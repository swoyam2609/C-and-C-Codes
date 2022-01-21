#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> arr;
    int n, div;
    cin>>n>>div;
    for(int i=0;i<n;i++){
        int ele;cin>>ele;
        arr.push_back(ele);
    }
    sort(arr.begin(),arr.end());
    int newdiv=div*(((int)(arr[0]+arr[n-1])/div));
    vector<int> divisor;
    int count=0;
    for(int i=div;i<=newdiv;i+=div){
        int f=0, l=n-1;
        while(f<l){
            if((arr[f]+arr[l])==div){
                count++;
                f++;l--;
            }
            else if((arr[f]+arr[l])<div){
                f++;
            }
            else if((arr[f]+arr[l])>div){
                l--;
            }
        }
    }
    cout<<count+1<<endl;
    return 0;
    
}
