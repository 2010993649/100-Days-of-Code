#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

};
Node* front=NULL;
Node* rear=NULL;

void enque(int x){
    Node* newnode=new Node();
    if(newnode==NULL){
        cout<<"queue is full";
    }
    else{
        newnode->data=x;
        newnode->next=NULL;
        if(front==NULL){
            front=newnode;
            rear=newnode;
        }
        else{
            rear->next=newnode;
            rear=newnode;
        }
        
    }
}

int deque(){
    int x;
    if(front==NULL){
        cout<<"queue is empty";
    }
    else{
        x=front->data;
        Node*t=front;
        front=front->next;
        free(t);
    }
    return x;

}
void display(){
    Node*p=front;
    while (p)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
    
}
int main(){
    enque(1);
    enque(2);
    enque(3);
    enque(4);
    enque(5);
    display();
    cout<<deque();
    cout<<deque();
    display();

}