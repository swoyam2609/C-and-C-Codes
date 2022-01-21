#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> mainarray;
    vector<pair<char,int>> answer;
    int n;
    cin>>n;
    int element;
    pair<char,int> temp;
    for(int i=0;i<n;i++){
        cin>>element;
        mainarray.push_back(element);
    }
    int m;
    cin>>m;
    int min=INT32_MAX;
    int pos;
    for(int i=0;i<m;i++){
        cin>>element;
        for(int j=0;j<n;j++){
            if(element==mainarray[j]){
                temp.first='y';
                temp.second=j;
                break;
            }
            else if(mainarray[j]>element && mainarray[j]<min){
                min=mainarray[j];
                temp.first='n';
                temp.second=j;
            }
        }
        if(temp.first=='y'){
            cout<<"Yes ";
        }
        else if(temp.first=='n'){
            cout<<"No ";
        }
        cout<<temp.second+1<<endl;
        
    }
    return 0;
}
