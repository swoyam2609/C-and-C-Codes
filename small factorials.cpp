#include<iostream>
#include<string>
#include<math.h>
using namespace std;
string stradd(string a, string b){
    string result="";
    int length_a=a.size();
    int length_b=b.size();
    string temp_result="";
    int buffer=0;
    while((a.size()>0)||(b.size()>0)){
        string temp_a="";
        string temp_b="";
        temp_a+=a[length_a];
        temp_b+=b[length_b];
        temp_result=to_string((stoi(temp_a)+stoi(temp_b))%10+buffer)+temp_result;
        buffer=(stoi(temp_a)+stoi(temp_b))/10;
        if(length_a>0){
            length_a--;
        }
        if(length_b>0){
            length_b--;
        }
    }
    return temp_result;
}


int main(){
    cout<<stradd("99", "98");
    return 0;
}