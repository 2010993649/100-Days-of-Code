#include<iostream>
using namespace std;
class Queue{
    public:
    int size,front,rear;
    int *arr;
};
void create(Queue *q,int size){
    q->size=size;
    q->front=q->rear=-1;
    q->arr=new int[q->size];

    
}
void enque(Queue*q,int x){
    if(q->rear==q->size-1){
        cout<<"queue is full";
    }
    else{
        q->rear++;
        q->arr[q->rear]=x;
        //cout<<x<<" ";
    }
}
int deque(Queue* q){
    int x;
    if(q->front==q->rear){
        cout<<"queue empty";
    }
    else{
        q->front++;
        x=q->arr[q->front];
    }
    return x;
}
void display(Queue q){
    int i;
    for(i=q.front+1;i<q.size;i++){
        cout<<q.arr[i]<<" ";

    }

}
int main(){
    Queue q;
    create(&q,5);

    enque(&q,1);
    enque(&q,2);
    enque(&q,3);
    enque(&q,4); 
    enque(&q,5);
     display(q);
    // cout<<endl<<deque(&q)<<endl;
    //  display(q);


}