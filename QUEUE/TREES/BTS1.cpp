#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

Node* insert(Node* root,int val){
    if(root==NULL){
        Node* node=new Node(val);
        node->left=node->right=NULL;
        return node;
    }
    if(val<root->data){
        root->left=insert(root->left,val);
    }
    else if(val>root->data){
        root->right=insert(root->right,val);
    }
    return root;
}

void insert_iterative(Node* &root,int val){
    Node* cur=root;
    Node* p=NULL;
    if(root==NULL){
        Node* node=new Node(val);
        node->left=nullptr;
        node->right=nullptr;
        root=node;
    }
    while(cur!=nullptr){
        p=cur;
        if(p->data > val){
            cur=cur->left;
        }
        else{
            cur=cur->right;
        }
    }
    Node* node=new Node(val);
    node->left=nullptr;
    node->right=nullptr;
    if(val > p->data){
        p->right=node;
    }
    else{
        p->left=node;
    }

}

void inorder(Node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

Node* search(Node* root,int k){
    if( root->data==k){
        cout<<root;
    }
    if(k<root->data){
        search(root->left,k);
    }
    else if(k>root->data){
        search(root->right,k);
    }
}

int main (){
    Node* root=NULL;
    root=insert(root,5);
    insert(root,3);
    insert(root,2);
    insert(root,4);
    insert(root,7);
    insert(root,6);
   // inorder(root);
   //search(root,4);
    insert_iterative(root,8);
    insert(root,88);
       inorder(root);



}