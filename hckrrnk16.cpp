#include<iostream>
#include<map>
#include<string>
using namespace std;
int main(){
    map<string,int> data;
    int n, choice, marks;
    string name;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>choice;
        switch(choice){
            case 1:
                cin>>name>>marks;
                if(data.find(name)==data.end()){
                    data.insert(make_pair(name,marks));
                }
                else{
                    data.find(name)->second = data.find(name)->second + marks;
                }
                break;
            case 2:
                cin>>name;
                if(data.find(name)!=data.end()){
                    data.find(name)->second=0;
                }
                break;
            case 3:
                 cin>>name;
                if(data.find(name)!=data.end()){
                    cout<<data.find(name)->second<<endl;
                }
                else{
                    cout<<0<<endl;
                }
                break;
        }
    }
    return 0;
}