#include<bits/stdc++.h>
using namespace std;
int bintodec(string number){
    int ans=0, power=0;
    for(int i=number.size()-1;i>=0;i++){
        if(number[i]=='1'){
            ans+=pow(2,power);
        }
        power++;
    }
    return ans;
}
string dectobin(int number){
    string ans="";
    while(number>0){
        ans=to_string(number%2)+ans;
        number=number/2;
    }
    return ans;
}
