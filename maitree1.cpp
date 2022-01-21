#include<iostream>
#include<string>
#include<vector>
using namespace std;

int repeat(string s){
    int max=0;
    int temp=0;
    for(int i=0;i<s.size();i++){
        temp=0;
        for(int j=0;j<s.size();j++){
            if(s[j]==s[i]){
                temp++;
            }
        }
        if(temp>max){
            max=temp;
        }
    }
    return max;
}

vector<string> arrayformer(string s){
    int j=0;
    vector<string> result;
    for(int i=0;i<s.size();i++){
        if(s[i]==' '){
            result.push_back(s.substr(j,i-j));
            j=i+1;
        }
    }
    return result;
}

int main(){
    string actual;
    getline(cin, actual);
    vector<string> actualarray = arrayformer(actual);
    string result="";
    int maxresult=1;
    for(int i=0;i<actualarray.size();i++){
        if(repeat(actualarray[i])>maxresult){
            result=actualarray[i];
            maxresult=repeat(actualarray[i]);
        }
    }
    if(maxresult!=1){
        cout<<result<<endl;
    }
    else{
        cout<<"-1"<<endl;
    }
    return 0;
}