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

node* getmiddle(node* &head){
    if(head== NULL){
        cout<<"ll is empty"<<endl;
        return head;
    }
    if(head -> next==NULL){
        return head;
    }
    node* slow=head;
    node* fast= head;

    while(slow != NULL && fast != NULL){
        fast = fast -> next ;
        if(fast != NULL){
            fast = fast->next;
            slow = slow->next;
        }
    }
    return slow;
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

    cout<<"the middle node is "<<getmiddle(first)->data <<endl;
    

    return 0;
}