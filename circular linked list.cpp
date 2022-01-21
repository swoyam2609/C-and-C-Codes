#include<iostream>
using namespace std;

class node{
    public:
    int data;         
    node* next;       
    node(int val){
        data = val;
        next = NULL;
    }
};

void insertattail(node* &head, int val){
    node* ptr = new node(val);
    if(head==NULL){
        head=ptr;
        ptr->next=head;
    }
    node* temp=head;
    do{
        temp=temp->next;
    }while(temp->next!=head);
    temp->next=ptr;
    ptr->next=head;
    return;
}

void displaylinkedlist(node* temp){
    node* head = temp;
    while(head->next!=NULL){
        cout<<head->data<<" - ";
        head=head->next;
    }
    cout<<head->data<<" - ";
    cout<<"END";
}

int main(){
    node* head=NULL;
    insertattail(head, 1);
    insertattail(head, 2);
    insertattail(head, 3);
    insertattail(head, 4);
    displaylinkedlist(head);
    return 0;
}