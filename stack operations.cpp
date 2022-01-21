 #include<iostream>
 using namespace std;

 #define n 5

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
};

int main(){
    stack stk;
    stk.push(1);
    stk.push(2);
    stk.push(3);
    stk.push(4);
    stk.push(5);
    stk.push(6);
    stk.pop();
    cout<<stk.Top()<<endl;
    cout<<stk.empty();
    return 0;
}