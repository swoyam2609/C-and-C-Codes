#include<iostream>
#include<string>
using namespace std;
class student{
    public:
        int age;
        string fname;
        string lname;
        int standard;
};
int main(){
    student abc;
    cin>>abc.age;
    cin>>abc.fname;
    cin>>abc.lname;
    cin>>abc.standard;
    cout<<abc.age<<endl<<abc.lname<<", "<<abc.fname<<endl<<abc.standard<<endl;
    cout<<endl<<abc.age<<","<<abc.fname<<","<<abc.lname<<","<<abc.standard;
}