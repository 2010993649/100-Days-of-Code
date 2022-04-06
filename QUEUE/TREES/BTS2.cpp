#include<iostream>
#include<stack>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    
};


void generate(int pre[],int size){
    stack<int>st;
    Node* t;
    Node* root=new Node();
    int i=0;
    root->data=pre[i+1];
    root->left=root->right=NULL;
    Node* p=root;

    while(i<size){
        if(pre[i]<p->data){
            Node* t=new Node();
            t->data=pre[i++];
            t->left=t->right=NULL;
            p->left=t;

            st.push(p->data);

            p=t;
        }

        else{

            if(pre[i] > p->data && pre[i] < st.top()){
                Node* t=new Node();
                t->data=pre[i++];
                t->left=t->right=NULL;
                p->right=t;
                p=t;

                 
            }
            else{
                 p=st.pop();

            }
        }
    }
    
}


int main(){

}