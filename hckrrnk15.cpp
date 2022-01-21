#include<iostream>
#include<set>
#include<iterator>
using namespace std;
int main(){
    set<int> s;
    int n, i, ele;
    cin>>n;
    for(int j=0;j<n;j++){
        cin>>i;
        switch(i){
            case 1:
                cin>>ele;
                s.insert(ele);
                break;
            case 2:
                cin>>ele;
                if(s.find(ele)!=s.end()){
                    s.erase(ele);
                }
                break;
            case 3:
                cin>>ele;
                if(s.find(ele)!=s.end()){
                    cout<<"Yes"<<endl;
                }
                else{
                    cout<<"No"<<endl;
                }
                break;
        }
    }
    return 0;
}