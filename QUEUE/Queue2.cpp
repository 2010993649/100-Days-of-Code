#include <iostream>
using namespace std;
class Queue{                                 ///circular quuqee
    public:
    int size,front,rear;
    int *arr;
};
void create(Queue *q,int size){
    q->size=size;
    q->front=q->rear=0;
    q->arr=new int[q->size];

    
}
void enque(Queue*q,int x){
    if((q->rear+1)%q->size==q->front){
        cout<<"queue is full";
    }
    else{
        q->rear=(q->rear+1)%q->size;
        q->arr[q->rear]=x;
    }
}
int deque(Queue*q){
    int x;

    if(q->front==q->rear){
        cout<<"queue empty";
    }
    else{
        q->front=(q->front+1)%q->size;
        x=q->arr[q->front];
    }
    return x;
}
void display(Queue q){
    int i=q.front+1;
    do
    {
        cout<<q.arr[i];
        i=(i+1)%q.size;
    } while (i!=(q.rear+1)%q.size);
    
}

int main(){
    Queue q;
    create(&q,5);

    enque(&q,1);
    enque(&q,2);
    enque(&q,3);
    enque(&q,4);
    display(q);
    cout<<endl<<deque(&q)<<endl;
    display(q);


}