#include<iostream>
using namespace std;
int main(){
    int a,b,c,d;
    int max;
    cin>>a;
    max=a;
    cin>>b;
    max=(b>max)?b:max;
    cin>>c;
    max=(c>max)?c:max;
    cin>>d;
    max=(d>max)?d:max;
    cout<<max;
    return 0;
}