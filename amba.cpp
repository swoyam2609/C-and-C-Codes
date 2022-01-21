#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<int> answer;
    int n;
    cin>>n;
    int element;
    for(int i=0;i<n;i++){
        cin>>element;
        answer.push_back(element);
    }   
    int a,b,c;
    cin>>a;
    answer.erase(answer.begin()+a-1);
    cin>>b>>c;
    for(int i=b;i<c;i++){
        answer.erase(answer.begin()+b-1);
    }
    cout<<answer.size()<<endl;
    for(int i=0;i<answer.size();i++){
        cout<<answer[i]<<" ";
    }
    return 0;
}
