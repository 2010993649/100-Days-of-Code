#include<iostream>
#include<stack>
using namespace std;
void insert_bottom(stack<int> &st,int x){
    if(st.empty()){
        st.push(x);
        return;
    }
    int top=st.top();
    st.pop();
    insert_bottom(st,x);
    st.push(top);
}


void reverse(stack<int> &st){
    if(st.empty()){
        return;
    }
    int x=st.top();
    st.pop();
    reverse(st);
    insert_bottom(st,x);
}

int main(){
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    
   
    reverse(st);
    while (st.empty()==false)
    {
        /* code */
        cout<<st.top()<<" ";
        st.pop();
    }
    




}