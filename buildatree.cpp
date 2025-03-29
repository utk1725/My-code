#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this -> data = data;
        this -> left = NULL;
        this-> right = NULL;
    }

};
int findposition(int arr[],int n,int element){
    for(int i=0;i<n;i++){
        if(arr[i] == element){
            return i;
        }
    }
    return -1;
}
//build tree from inorder and preorder traversal
Node* buildtreefrompreorderinorder(int inorder[],int preorder[],int size,int &preindex,int inorderstart,int inorderend){
    //base case
    if(preindex >= size || inorderstart > inorderend){
        return NULL;
    }
    //step A:
    int element = preorder[preindex++];
    Node* root = new Node(element);
    int pos = findposition(inorder,size, element);

    //step B: root->left solve
    root->left = buildtreefrompreorderinorder(inorder,preorder,size,preindex,inorderstart,pos-1);
    //step C: root->right solve
    root->right = buildtreefrompreorderinorder(inorder,preorder,size,preindex,inorderend,pos+1);

return root;
}
int main(){

    int inorder[] = {40,20,50,10,60,30,70};
    int preorder[] = {10,20,40,50,30,60,70};
    int size = 7;
    int preindex = 0;
    int inorderstart = 0;
    int inorderend = size-1;

    cout<< "building tree" <<endl;
    Node* root = buildtreefrompreorderinorder(inorder,preorder,size,preindex,inorderstart,inorderend);

    cout<<"printing level order traversal" <<endl;
   // levelordertraversal(root);


    return 0;
}