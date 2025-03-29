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
node* reverse(node* &prev,node* &curr){
    //base case
    if(curr == NULL){
        return prev;
    }
    node* forward = curr -> next;
    curr -> next = prev;

    return reverse(curr,forward);
}
node* getmiddle(node* &head){
    
}
int main(){
    
    node* first = new node(10);
    node* second = new node(20);
    node* third = new node(30);
    node* fourth = new node(40);
    node* fifth = new node(50);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    node* head = first;

    cout<<"printing the ll"<<endl;
    print(head);

    node* prev=NULL;
    node* curr=head;
    head = reverse(prev,curr);
    cout<<endl;
    print(head);
    cout<<endl;

    return 0;
}