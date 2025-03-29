#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this -> data = data;
        this ->left = NULL;
        this-> right = NULL;
    }
};
Node * insertIntoBST(Node* root, int data){
    if(root == NULL){
        root = new Node(data);
        return root;
    }
    if(root -> data > data){
        root->left = insertIntoBST(root->left,data);
    }else{
        root->right = insertIntoBST(root->right,data);
    }
    return root;
}
void takeinput(Node* &root){
    int data;
    cin >> data;
    while(data != -1){
        root = insertIntoBST(root,data);
        cin >> data;

    }
}
void preOrderTraversal(Node* root){
    //NLR
    if(root==NULL)
        return ;
    cout<<root->data<<" ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}
void postOrderTraversal(Node* root){
    //LRN
    if(root==NULL)
    return;
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout<<root->data<<" ";
}
void inOrderTraversal(Node* root){
    //LNR
    if(root==NULL)
    return;
    inOrderTraversal(root->left);
    cout<<root->data<<" ";
    inOrderTraversal(root->right);
}
Node* findNodeInBST(Node* root,int target){
    //base case
    if(root==NULL)
    return NULL;

    if(root->data==target){
        return root;
    }
    if(root->data<target){
        return findNodeInBST(root->right,target);
    }else{
        return findNodeInBST(root->left,target);
    }
}
int minVal(Node* root){
    Node* temp = root;
    if(temp == NULL){
        return -1;
    }
    while(temp -> left !=NULL){
        temp = temp->left;
    }
    return temp ->data;
}
int maxVal(Node* root){
    Node* temp = root;
    if(temp == NULL){
        return -1;
    }
    while(temp->right != NULL){
        temp=temp->right;
    }
    return temp->data;
}
Node* deleteNodeInBST(Node* root,int target){
    //base case
    if(root == NULL){
    return root;
    }
    if(root->data == target){
        //delete it 
        //4 cases
        if(root->left == NULL && root->right == NULL){
            //leaf node
        delete root;
        return NULL;
        }
        else if (root->left == NULL && root->right != NULL){
            Node* child = root->right;
            delete root;
            return child;
        }
        else if(root->right == NULL && root->left != NULL){
            Node* child = root->left;
            delete root;
            return child;
        }
        else {
            //both child
            int inorderpre = maxVal(root->left);
            root->data = inorderpre;
            root->left = deleteNodeInBST(root->left,inorderpre);
            return root;
        
        }
    }
    else if (target>root->data){
        root->right = deleteNodeInBST(root->right,target);
    }
    else if(target<root->data){
        root->left = deleteNodeInBST(root->left,target);
    }
    return root;
}

int main(){
    Node* root = NULL;
    cout<<"Enter the data for Node"<<endl;
    takeinput(root);
  cout<<"print the tree"<<endl;
//to print the tree you need to write the level order traversal code and call the function here 
//levelOrderTraversal(root);
cout<<endl;
cout<<"printing Inorder: "<<endl;
inOrderTraversal(root);
cout<<endl;
cout<<"printing Preorder: "<<endl;
preOrderTraversal(root);
cout<<endl;
cout<<"printing Postorder: "<<endl;
postOrderTraversal(root);
bool ans = findNodeInBST(root,4);
cout<< "present or not :"<<ans <<endl;
cout<<endl<<"Minimum value: "<<minVal(root) <<endl;
cout<<endl<<"Maximum value: "<<maxVal(root) <<endl;
deleteNodeInBST(root,10);

return 0;
}