#include<iostream>
using namespace std;

typedef struct employee{
    int employeeid;
    char favchar;
    int salary;
} employee ;

typedef union money{
    int rice;
    char car;
    float pounds;
} mon ;

int main(){
    enum meal{breakfast, lunch, dinner};
    cout<<lunch+dinner;
    return 0;
}