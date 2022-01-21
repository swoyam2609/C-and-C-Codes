#include<iostream>
#include<string>
using namespace std;
int main(){
    string characters = "abcdefghijklmnopqrstuvwxyz";
    int arr[26];
    for(int i=0;i<26;i++){
        arr[i]=0;
    }
    string s1;
    cin>>s1;
    for(int i=0;i<s1.size();i++){
        arr[s1[i]-'a']++;
    }
    int maxcount=0;
    char max = ' ';
    for(int i=0;i<26;i++){
        if(arr[i]>maxcount){
            maxcount=arr[i];
            max=characters[i];
        }
    }
    cout<<max<<endl;
    cout<<maxcount;
    return 0;
}
