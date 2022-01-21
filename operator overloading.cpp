#include<iostream>
using namespace std;

class complex{
    private:
        int real, imag;
    public:
        complex(){
            //Default Constructor
        }
        complex(int r, int i){
            //Parameterised Constructor
            real=r;
            imag=i;
        }
        bool operator < (complex &c){
            if((real*real + imag*imag)<(c.real*c.real + c.imag*c.imag)){
                return true;
            }
            else{
                return false;
            }
        }
};

int main(){
    complex a(3,4);
    complex b(6,8);
    cout<<(a<b);
    return 0;
}