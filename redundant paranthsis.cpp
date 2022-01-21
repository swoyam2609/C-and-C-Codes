#include<iostream>
#include<string>
using namespace std;
int main(){
    string actual;
    cin>>actual;
    string temp="";
    for(int i=0;i<actual.size();i++){
        if(actual[i]=='(' || actual[i]==')' || actual[i]=='+' || actual[i]=='-' || actual[i]=='/' || actual[i]=='*'){
            temp+=actual[i];
        }
    }
    string str1="(+)", str2="(-)", str3="(/)", str4="(*)";
    size_t found1, found2, found3, found4;
    do{
        found1=temp.find(str1);
        if(found1!=string::npos){
            temp.erase(found1,3);
        }
        found2=temp.find(str2);
        if(found2!=string::npos){
            temp.erase(found2,3);
        }
        found3=temp.find(str3);
        if(found3!=string::npos){
            temp.erase(found3,3);
        }
        found4=temp.find(str4);
        if(found4!=string::npos){
            temp.erase(found4,3);
        }
    }while(found1!=string::npos || found2!=string::npos || found3!=string::npos || found4!=string::npos);
    if(temp.size()!=0){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
    return 0;
}