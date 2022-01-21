#include<bits/stdc++.h>
using namespace std;

int query1(int &count, int number){
    count++;
    number--;
    return number;
}

int query2(int &count, int number){
    count++;
    int i,j;
    for(i=1;i<=sqrt(number);i++){
        if(number%i==0){
            j=i;
        }
    }
    number=max(j,number/j);
    return number;
}

int solve(int count, int number){
    if(number==0){
        return count;
    }
    number=min(query1(count, number), query2(count, number));
    return solve(count, number);
}

int main(){
    int q, ele;
    cin>>q;
    for(int i=0;i<q;i++){
        cin>>ele;
        cout<<(solve(0, ele)/2)<<endl;
    }
    return 0;
}