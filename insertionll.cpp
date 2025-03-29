#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;

    node(){
        this->data = 0;
        this->next = NULL;
    }
    node(int data){
        this->data = data;
        this->next = NULL;
        }
};
void insertathead(node* &head,node* &tail,int data){
    //first node
    //check for empty ll
    if (head == NULL){
        node* newnode = new node(data);
        head = newnode;
        tail = newnode;
        return ;
    }
    node* newnode= new node(data);
    newnode ->next = head; 
    head = newnode;  
}
void insertattail(node* &head,node* &tail, int data){
   //check for empty ll
    if (head == NULL){
        node* newnode = new node(data);
        head = newnode;
        tail = newnode;
        return ;
    }
    node* newnode=new node(data);
        tail->next = newnode;
        tail=newnode;

    }
void print(node* &head){

    node* temp = head;
    while(temp != NULL){
        cout<< temp->data <<" ";
        temp=temp->next;

    }
}
int findlength(node* &head){
    int len =0 ;
    node* temp = head;
    while(temp != NULL){
        temp = temp ->next;
        len++;
    }
    return len;
}
void insertatposition(int position ,int data ,node* &head,node* &tail ){
    if(head == NULL){
        node* newnode = new node(data);
        head = newnode;
        tail = newnode;
        return ;
    }
    //find position: pre & curr
    if(position == 0){
        insertathead(head,tail,data);
        return ;
    }
    int len = findlength(head);
    if(position >= len){
        insertattail(head,tail,data);
        return ;
    }
    int i =1;
    node* prev = head;
    while(i < position){
        prev = prev -> next;
        i++;
    }
    node* curr = prev -> next;
    //creating a node
    node* newnode = new node(data);

    newnode -> next = curr;
    prev -> next = newnode;
}

int main(){
    node *head =NULL;
    node *tail=NULL;
    insertathead(head,tail,20);
    insertathead(head,tail,50);
    insertathead(head,tail,70);
    insertathead(head,tail,90);
    insertattail(head,tail,100);

    print(head);

    insertatposition(2,101,head,tail);
    cout<<endl;
    print(head);
    insertatposition(6,101,head,tail);
    cout<<endl;
    print(head);
    insertatposition(0,101,head,tail);
    cout<<endl;
    print(head);
    return 0;
}