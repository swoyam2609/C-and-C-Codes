#include<iostream>
#include<math.h>
using namespace std;
int main(){
    unsigned long int n;
    cin>>n;
    if(n<0 || n>pow(10,6)){
        return 0;
    }
    else{
        switch(n){
            case 1:
            cout<<"1";
            break;

            case 2:
            cout<<"NO SOLUTION";
            break;

            case 3:
            cout<<"NO SOLUTION";
            break;

            case 4:
            cout<<"2 4 1 3";
            break;

            default:
            unsigned long int i=2;
            cout<<i;
            unsigned long int count=1;
            while(count<=(n-2)/2){
                i++;i++;
                cout<<" "<<i;
                count++;
            }
            i=1;
            count=1;
            while(count<=(n+2)/2){
                cout<<" "<<i;
                i++;i++;
                count++;
            }
        }
    }
    return 0;
}