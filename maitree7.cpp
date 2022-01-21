#include<bits/stdc++.h>
#include<string>
#define PI 3.1416
using namespace std;

void computewastage(int radius,int height,int circleradius)
{
    int area=2*PI*radius*height;
    int area_=PI*circleradius;
    int no_=area%area_;
    int wastage=area-area_*no_;
    cout<<ceil(wastage);

}

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    computewastage(a,b,c);
    return 0;
}