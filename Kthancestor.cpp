#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this -> data = data;
        left = NULL;
        right = NULL;
    }
};
bool kthancestor(Node* root, int k,Node* p){
    //base case
    if(root == NULL)
    return false;
    if(root->data==p->data){
    return true;
    }
    bool leftans = kthancestor(root->left,k,p);
    bool rightans = kthancestor(root->right,k,p);

    if(leftans||rightans)
    k--;
    if(k==0)
    cout<<"answer"<<root->data<<" "<< endl;

    return leftans||rightans;


}
int main(){



    return 0;
}