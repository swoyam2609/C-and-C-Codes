#include<iostream>
using namespace std;

class swoyam{
    public:
    //Function overloading
    void func(){
        cout<<"Am the empty function"<<endl;;
    }

    void func(int a){
        cout<<"Am a function with integer input"<<endl;;
    }

    void func(char a){
        cout<<"Am a function with Character input"<<endl;
    }
};

class complex{
private:
    int real, imag;
public:
    complex(){};
    complex(int r, int i){
        real=r;
        imag=i;
    }
    //operator overloading
    complex operator + (complex &a){
        complex result;
        result.imag=imag + a.imag;
        result.real = real + a.real;
        return result;
    }

    //printing complex number
    void printinfo(){
        cout<<real<<" + i"<<imag<<endl;
    }
};

class baseclass{
public:
    void print(){
        cout<<"This is the base class print function";
    }
    void display(){
        cout<<"This is the base class display function";
    }
};

class derivedclass : public baseclass{
    void print(){
        cout<<"This is the derived class print function";
    }
    void display(){
        cout<<"This is the derived class display function";
    }
};

int main(){
    //function overloading
    swoyam l;
    l.func();
    l.func(1);
    l.func('a');

    //operator overloading
    complex a(2, 4);
    complex b(6, 8);
    complex c=a+b;
    c.printinfo();

    //run time overloading
    baseclass *m;
    derivedclass n;
    *m=&n;
    *m -> print();
}