#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node* prev;
        node* next;
        node(int val){
            data=val;
            prev=NULL;
            next=NULL;
        }
};

void insertattail(node* &head, int val){
    node* p = new node(val);
    if(head==NULL){
        head=p;
    }
    node* temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=p;
    p->prev=temp;
}

void display(node* head){
    node* temp=head;
    while(temp->next!=NULL){
        cout<<temp->data<<" - ";
        temp=temp->next;
    }
    cout<<temp->data<<" - NULL";
}

int main(){
    node* head=NULL;
    insertattail(head, 2);
    insertattail(head, 3);
    insertattail(head, 4);
    display(head);
}