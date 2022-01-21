#include<iostream>
#include<string>
#define n 100
using namespace std;

class stack{
    private:    
        string* str;
        int top;

    public:
        stack(){
            str = new string[n];
            top = -1;
        }

        void push(string s){
            if(top==n-1){
                cout<<"Stack Overflow"<<endl;
                return;
            }
            
            top++;
            str[top]=s;
            return;
        }

        void pop(){
            if(top==-1){
                cout<<"Empty Stack"<<endl;
                return;
            }
            
            top--;
            return;
        }

        string topelement(){
            if(top==-1){
                return "Empty Stack";
            }
            return str[top];
        }

        bool empty(){
            if(top==-1){
                return true;
            }
            else{
                return false;
            }
        }
};

int main(){
    string s;
    getline(cin, s);
    int f=0;
    int itr=0;
    stack final;
    while(f<s.size()){
        if(s[itr]==' '||itr==s.size()){
            string temp=s.substr(f,(itr-f));
            final.push(temp);
            f=itr+1;
        }
        itr++;
    }
    while(final.empty()==false){
        cout<<final.topelement()<<" ";
        final.pop();
    }
    return 0;
}