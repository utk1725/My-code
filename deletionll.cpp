#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* next;

    node() {
        this->data = 0;
        this->next = NULL;
    }
    node(int data) {
        this->data = data;
        this->next = NULL;
    }
    ~node() {
        cout << "Node with value " << this->data << " deleted" << endl;
    }
};

void print(node* head) {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int findlength(node* head) {
    int len = 0;
    node* temp = head;
    while (temp != NULL) {
        temp = temp->next;
        len++;
    }
    return len;
}

void deletenode(int position, node*& head, node*& tail) {
    if (head == NULL) {
        cout << "Cannot delete, linked list is empty" << endl;
        return;
    }

    // Deleting the first node
    if (position == 1) {
        node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
        return;
    }

    int len = findlength(head);
    
    // Deleting the last node
    if (position == len) {
        int i = 1;
        node* prev = head;
        while (i < position - 1) {
            prev = prev->next;
            i++;
        }
        node* temp = prev->next;
        prev->next = NULL;
        tail = prev; // Update tail
        delete temp;
        return;
    }

    // Deleting a middle node
    int i = 1;
    node* prev = head;
    while (i < position - 1) {
        prev = prev->next;
        i++;
    }
    node* temp = prev->next;
    prev->next = temp->next;
    temp->next = NULL;
    delete temp;
}


int main() {
    node* head = NULL;
    node* tail = NULL;

    node* first = new node(10);
    node* second = new node(20);
    node* third = new node(30);
    node* fourth = new node(40);
    node* fifth = new node(50);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    // Update head and tail
    head = first;
    tail = fifth;

    cout << "Printing the linked list:" << endl;
    print(head);

    cout << "Deleting node at position 3" << endl;
    deletenode(3, head, tail);
    
    cout << "Printing after deletion:" << endl;
    print(head);

    return 0;
}
