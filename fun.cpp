#include<iostream>
#include<unistd.h>
#include<cstring>

using namespace std;
int main(){
    string s;
    cout<<"Enter a String: ";
    getline(cin,s);
    for(int i=0;i<s.size();i++){
        if(isupper(s[i])){
            s[i]+=32;
        }
    }
    s[0]-=32;
    int pos=0;
    system("clear");
    while(true){
        cout<<s<<endl<<flush;
        
        sleep(1);
        system("clear");
        s[pos]+=32;
        if(pos==s.size()-1){
            pos=-1;
        }
        if(s[pos+1]==' '){
            pos++;
        }
        s[pos+1]-=32;
        
        pos++;
        
    }
    return 0;
}
