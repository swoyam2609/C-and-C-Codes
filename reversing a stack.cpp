#include<iostream>
#define n 100
using namespace std;

 class stack{
     int* arr;
     int top;
     
     public:

     stack(){
         arr=new int[n];
         top=-1;
     }

    void push(int x){
        if(top==n-1){
            cout<<"Stack Overflow"<<endl;
            return;
        }
        else{
            top++;
            arr[top]=x;
            return;
        }
    }

    void pop(){
        if(top==-1){
            cout<<"Empty Stack"<<endl;
            return;
        }
        else{
            top--;
            return ;
        }
    }

    int Top(){
        if(top==-1){
            cout<<"Empty Stack"<<endl;
            return top;
        }
        return arr[top];
    }

    bool empty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }

    int element(int pos){
        return arr[pos];
    }

    void change(int value, int pos){
        arr[pos]=value;
        return;
    }
};

void reverse(stack stk, int m){
    if(m==1){
        return;
    }
    int temp=stk.element(m-1);
    reverse(stk, m-1);
    int itr=m-1;
    while(itr!=0){
        stk.change(stk.element(itr-1), itr);
        itr--;
    }
    stk.change(temp, itr);
}

int main(){
    stack stk;
    stk.push(1);
    stk.push(2);
    stk.push(3);
    stk.push(4);
    stk.push(5);
    stk.push(6);
    reverse(stk, 6);
    while(stk.empty()==false){
        cout<<stk.Top()<<" ";
        stk.pop();
    }
    return 0;
}