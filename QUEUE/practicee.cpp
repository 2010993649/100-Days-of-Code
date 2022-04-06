#include<iostream>
#include<stack>
#include<queue>
using namespace std;
// stack<int>st;
// void reverse_q(queue<int>& Q){
//     while(!Q.empty()){
//         st.push(Q.front());
//         Q.pop();

//     }
//     while(!st.empty()){
//         Q.push(st.top());
//         st.pop();
//     }
    
// }
// void print(queue<int>& Q){
//     while (!Q.empty())
//     {
//         cout<<Q.front()<<" ";
//         Q.pop();
//     }
    
// }




int main(){
    queue<int>Q;
    Q.push(1);
    Q.push(2);
    Q.push(3);
    Q.push(4);
    Q.push(5);
    Q.push(11);
    //print(Q);
   // reverse_q(Q);
    //print(Q);
    string s="AJFT44HR3";
    s.sort(s.begin(),s.end());
    cout<<s;
    
    
    
}