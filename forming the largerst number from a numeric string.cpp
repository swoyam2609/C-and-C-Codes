#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s1;
    cin>>s1;
    sort(s1.begin(), s1.end(), greater<char>());
    int x=stoi(s1);
    cout<<x;
    return 0;
}