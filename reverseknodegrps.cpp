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
void print(node* &head){
    node* temp = head;
    while(temp != NULL){
        cout<< temp->data <<" ";
        temp=temp->next;

    }
}
int getlength(node* head){
    int len=0;
    node* temp = head;
    while(temp != NULL){
        temp = temp ->next;
        len++;
        }
        return len;

}
node* reverseKnodes(node* &head, int k){
    if(head==NULL){
        cout<<"ll is empty";
        return NULL;
    }
    int len = getlength(head);
    if(k > len){
        cout<<"enter valid value for k"<<endl;
        return head;
    }
    node* prev= NULL;
    node* curr = head;
    node* forward = curr -> next;
    int count = 0;

    while(count < k){
        forward = curr-> next;
        curr -> next = prev;
        prev = curr;
        curr = forward;
        count++;
    }
    if(forward != NULL){
        head->next=reverseKnodes(forward,k);
    }
    return prev;
}

int main(){
    
    node* head = new node(10);
    node* second = new node(20);
    node* third = new node(30);
    node* fourth = new node(40);
    node* fifth = new node(50);
    node* sixth = new node(60);
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;

    cout<<"print original list"<<endl;
    print(head);

    head=reverseKnodes(head,4);
    print(head);

   

    return 0;
}