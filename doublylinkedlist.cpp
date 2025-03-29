#include<iostream>
using namespace std;
 class node{
    public :
    int data ;
    node* prev;
    node* next;
    node(){
        this->data= 0;
        this->prev=NULL;
        this->next=NULL;
    }
    node(int data){
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
    ~node(){
        cout<<"node with value";
    }

 };
 void print(node* head){
    node* temp = head;
    while(temp != NULL){
        cout<< temp->data<<" ";
        temp = temp-> next;
    }
 }
 int getlength(node* head){
    int len=0;
    node* temp=head;

    while(temp != NULL){
        temp = temp->next;
        len++;
    }
    return len;
 }
 void insertathead(int data,node* &head,node* &tail ){
    if(head==NULL){
        //ll is empty
        node* newnode =new node(data);
        head = newnode;
        tail = newnode;
    }
    else{
        node* newnode= new node(data);
        newnode-> next=head;
        head->prev=newnode;
        head=newnode;
    }
 }
 void insertattail(int data, node* &head,node* &tail){
    if(head==NULL){
        node* newnode= new node(data);
        head=newnode;
        tail=newnode;
    }
    else{
        node* newnode=new node(data);
        tail->next=newnode;
        newnode->prev=tail;
        tail=newnode;
    }
 }
 void insertatposition(int data,node* &head,node* &tail,int position){
    if(position==0){
        node* newnode= new node(data);
        head=newnode;
        tail=newnode;
    }
    else{
        if(position==1){
            insertathead(data,head,tail );
            return;
        }
        int len=getlength(head);
        if(position >= len){
            insertattail(data,head,tail);
            return;
        }
        //insert at position

        int i=0;
        node* prevnode = head;
        while(i<position -1){
            prevnode = prevnode->next;
            i++;
        }
        node* curr= prevnode->next;
        node* newnode= new node(data);
        prevnode->next=newnode;
        newnode->prev=prevnode;

        newnode->next=curr;
        curr->prev=newnode;
    }
}
void deletefrompos(node* &head,node* &tail,int position){
    if(head== NULL){
        cout<<"linked list is empty";
        return;
    }
    if(head->next == NULL){
        node* temp=head;
        head=NULL;
        tail=NULL;
        delete temp;
        return;
    }
    if(position ==1){
        node* temp=head;
        head=head->next;
        head->prev=NULL;
        temp->next=NULL;
        delete temp;
        return;
    }
    int len=getlength(head);
    if(position == len){
        node* temp =tail;
        tail =tail->prev;
        temp->prev=NULL;
        tail->next=NULL;
        delete temp;
        return;
    }
    int i=1;
    node* left=head;
    while(i<position-1){
        left=left->next;
        i++;
    }
    node* curr=left->next;
    node* right=curr->next;

    left->next=right;
    right->prev=left;
    curr->next=NULL;
    curr->prev=NULL;
    delete curr;
}
 int main(){
    node* first = new node(10);
    node* second = new node(20);
    node* third = new node(30);
    node* head = first;
    node* tail = third;

    first -> next = second;
    second-> prev=first;

    second -> next = third;
    third->prev=second;

    print(first);

    insertathead(101,head,tail);
    cout<<endl;
    print(head);

    insertattail(501,head,tail);
    cout<<endl;
    print(head);
    
    insertatposition(201,head,tail,1);
    cout<<endl;
    print(head);
    

   
   

    return 0;

 }