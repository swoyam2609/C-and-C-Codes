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
    node* p = new node(val);                 
    if(head==NULL){                          
        head=p;                              
        return;
    }
    node* temp = head;                       
    while(temp->next!=NULL){                 
        temp=temp->next;                     
    }
    temp->next=p;                            
}

void insertathead(node* &head, int val){     
    node* p = new node(val);                 
    p->next=head;                            
    head=p;                                  
}

void insertatposition(node* head, int pos, int val){  
    node* p=new node(val);                             
    node* temp=head;                                  
    for(int i=2;i<pos;i++){
        temp=temp->next;
    }                   
    p->next=temp->next;
    temp->next=p;         
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

bool search(node* head, int key){
    while(head->next!=NULL){
        if(head->data==key){
            return true;
        }
        head=head->next;
    }
    return false;
}

void delete_element(node* &head, int n){
    if(head==NULL){
        cout<<"Empty List";
    }
    else if(n==1){
        head=head->next;
        return;
    }
    node* temp=head;
    for(int i=2;i<n;i++){
        temp=temp->next;
    }
    temp->next=temp->next->next;
}

void reverse(node* &head){
    node* prev=NULL;
    node* current=head;
    node* next;
    while(true){
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
        if(next==NULL){
            break;
        }
    }
    head=prev;
    return;
}

node* reverse_recursive(node* head){
    if(head->next==NULL || head==NULL){
        return head;
    }
    node* newhead= reverse_recursive(head->next);
    head->next->next=head;
    head->next=NULL;
    return newhead;
}

node* reversek(node* head, int k){
    node* prev=NULL;
    node* curr=head;
    node* next;
    int count=0;
    while(curr!=NULL && count<k){
        next=curr->next;
        curr->next=prev;

        prev=curr;
        curr=next;
        count++;
    }

    if(next!=NULL){
        head->next=reversek(next, k);
    }

    return prev;
}

bool checkcycle(node* start){
    node* rabbit=start;
    node* tortoise=start;
    do{
        rabbit=rabbit->next->next;
        tortoise=tortoise->next;
        if(rabbit==tortoise){
            return true;
        }
    }while(rabbit->next!=NULL && rabbit!=NULL);
    return false;
}

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
    newtail->next=NULL;
    lastelement->next=head;
    head=newhead;
    return;
}

int findllen(node* head){
    if(head==NULL){
        return 0;
    }
    node* temp=head;
    int count=1;
    while(temp->next!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}

node* pointofintersect(node* head1, node* head2){
    if(findllen(head2)>findllen(head1)){ //making linked list with head1 as the largest linked list
        node* temp=head1;
        head1=head2;
        head2=temp;
    }
    int jump = findllen(head1)-findllen(head2);
    for(int i=0;i<jump;i++){
        head1=head1->next;
    }
    while(head1!=head2){
        head1=head1->next;
        head2=head2->next;
    }
    return head1;
}

node* merge(node* head1, node* head2){
    node* head=NULL;
    if(head1->data<head2->data){
        head=head1;
        head1=head1->next;
    }
    else{
        head=head2;
        head2=head2->next;
    }
    node* temp=head;
    while(true){
        if(head1==NULL && head2==NULL){
            temp->next=NULL;
            break;
        }
        else if(head1==NULL){
            temp->next=head2;
            head2=head2->next;
        }
        else if(head2==NULL){
            temp->next=head1;
            head1=head1->next;
        }
        else if(head1->data<head2->data){
            temp->next=head1;
            head1=head1->next;
        }
        else if(head2->data<head1->data){
            temp->next=head2;
            head2=head2->next;
        }
        temp=temp->next;
    }
    return head;
}

node* evenbehidodd(node* head){
    node* temp = head;
    node* odd=NULL;
    node* even=NULL;
    while(true){
        if(temp->next==NULL){
            insertattail(odd, temp->data);
            break;
        }
        else if(temp->next->next==NULL){
            insertattail(odd, temp->data);
            insertattail(even, temp->next->data);
            break;
        }
        insertattail(odd, temp->data);
        insertattail(even, temp->next->data);
        temp=temp->next->next;
    }
    node* tmp=odd;
    while(tmp->next!=NULL){
        tmp=tmp->next;
    }
    tmp->next=even;
    return odd;
}

void deletefromhead(node* &head){
    head=head->next;
    return;
}

void swapnode(node* &head, int x, int y){
    insertathead(head, x+y);
    node* temp=head;
    node* element1prev=temp;
    node* element1=temp->next;
    node* element1next=temp->next->next;
    while(element1->data!=x && element1next!=NULL){
        temp=temp->next;
        element1prev=temp;
        element1=temp->next;
        element1next=temp->next->next;
    }
    temp=head;
    node* element2prev=temp;
    node* element2=temp->next;
    node* element2next=temp->next->next;
    while(element2->data!=y && element2next!=NULL){
        temp=temp->next;
        element1prev=temp;
        element1=temp->next;
        element1next=temp->next->next;
    }
    element1prev->next=element2;
    element2->next=element1next;
    element2prev->next=element1;
    element1->next=element2next;
    deletefromhead(head);
    return;
}

int main(){
    node* start=NULL;
    insertattail(start, 2);
    insertattail(start, 3);
    insertattail(start, 4);
    insertattail(start, 5);
    insertathead(start, 1);
    insertatposition(start, 3, 33);
    //displaylinkedlist(start);
    cout<<endl;
    cout<<endl;
    delete_element(start, 1);
    //displaylinkedlist(start);
    cout<<endl;
    reverse(start);
    //displaylinkedlist(start);
    start=reverse_recursive(start);
    cout<<endl;
    cout<<endl;
    //displaylinkedlist(start);
    insertattail(start, 12);
    insertattail(start, 13);
    insertattail(start, 14);
    insertattail(start, 15);
    cout<<endl;
    cout<<endl;
    //displaylinkedlist(start);
    start=reversek(start, 3);
    cout<<endl;
    cout<<endl;
    //displaylinkedlist(start);
    append(start, 2);
    cout<<endl;
    cout<<endl;
    //displaylinkedlist(start);
    cout<<endl;
    cout<<endl;
    //cout<<findllen(start);    
    
    node* star=NULL;
    insertattail(star, 12);
    insertattail(star, 13);
    insertattail(star, 14);
    insertattail(star, 15); 
    cout<<endl;
    cout<<endl;
    //displaylinkedlist(star);
    star->next->next->next->next=start->next->next;
    cout<<endl;
    cout<<endl;
    //displaylinkedlist(star);

    cout<<endl;
    cout<<endl;
    //cout<<pointofintersect(start, star)->data;

    node* list1=NULL;
    node* list2=NULL;
    insertattail(list1, 1);
    insertattail(list1, 4);
    insertattail(list1, 5);
    insertattail(list1, 7);
    insertattail(list2, 2);
    insertattail(list2, 3);
    insertattail(list2, 8);
    //cout<<"List 1 = ";
    //displaylinkedlist(list1);
    cout<<endl<<endl;
    //cout<<"List 2 = ";
    //displaylinkedlist(list2);
    node* final = merge(list1, list2);
    //cout<<endl<<endl<<"Final = ";
    //displaylinkedlist(final);
    cout<<endl<<endl;
    //node* header=evenbehidodd(final);
    //displaylinkedlist(header);

    //cout<<endl<<endl;
    //displaylinkedlist(swapnode(header,5,8));
    displaylinkedlist(list2);
    swapnode(list2, 3, 8);
    cout<<endl;
    displaylinkedlist(list2);
    return 0;
}
