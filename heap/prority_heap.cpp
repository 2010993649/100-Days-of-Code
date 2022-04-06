#include<iostream>
#include<queue>
using namespace std;
int main(){
    // priority_queue<int,vector<int>,greater<int>>pq;
    // pq.push(1);
    // pq.push(3);
    // pq.push(2);
    // pq.push(5);
    // pq.push(5);
    // // cout<<pq.size()<<endl;
    // // cout<<pq.top();

    // while(pq.empty()==false){
    //     cout<<pq.top()<<" ";
    //     pq.pop();
    // }

    int arr[]={2,3,5,4,1};
    int n=5;
    priority_queue<int>pq(arr,arr+n);
    while(pq.empty()==false){
        cout<<pq.top();
        pq.pop();
    }




    }