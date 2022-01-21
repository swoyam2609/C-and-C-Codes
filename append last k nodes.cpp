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

void append(node* &head, int k){
    node* newtail=head;
    node* lastelement=head;
    for(int i=0;i<k;i++){
        lastelement=lastelement->next;
    }
    while(lastelement->next!=NULL){
        lastelement=lastelement->next;
        newtail=newtail->next;
    }
    node* newhead=newtail->next;
    lastelement->next=head;
    head=newhead;
    newtail->next=NULL;
    return;
}