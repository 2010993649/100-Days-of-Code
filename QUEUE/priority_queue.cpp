#include<iostream>
#include<queue>
using namespace std;


// void show(priority_queue<int>pq){
//     while(!pq.empty()){
//         cout<<pq.top()<<endl;
//         pq.pop();
//     }

// }

void show(priority_queue<pair<int,int>>q){
    while(!q.empty()){
        cout<<q.top().second<<" "<<q.top().first<<endl;
        q.pop();
    }
}

int main(){
    /*
    priority_queue<int>pq;
    pq.push(9);
    pq.push(6);
    pq.push(5);
    pq.push(3);
    pq.push(9);
    show(pq);
    */
   priority_queue<pair<int,int>>q;
   q.push(make_pair(1,3));
   q.push(make_pair(2,4));
   q.push(make_pair(3,1));
   q.push(make_pair(4,1));
   q.push(make_pair(9,5));
   show(q);


    
}


    