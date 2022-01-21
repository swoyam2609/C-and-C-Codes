#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool check(pair<int,int> a, pair<int,int> b){
    return (a.first<b.first);
}

int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    vector<pair<int,int>> paireditems;
    for(int i=0;i<n;i++){
        paireditems.push_back(make_pair(array[i],i));
    }
    sort(paireditems.begin(), paireditems.end(), check);
    for(int i=0;i<paireditems.size();i++){
        array[paireditems[i].second]=i;
    }
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    return 0;
}
