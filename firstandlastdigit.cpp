#include<iostream>
#include<string>
using namespace std;
int firstlast(string s){
    string s1="";
    string s2="";
    s1+=s[0];
    s2+=s[(s.size()-1)];
    int a=stoi(s1);
    int b=stoi(s2);
    return(a+b);
}
int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        string test;
        cin>>test;
        array[i]=firstlast(test);
    }
    for(int i=0;i<n;i++){
        cout<<array[i]<<endl;
    }
    return 0;
}