#include<iostream>
using namespace std;
#include<stack>

    stack<string>st;
    

    void rev_sent(string s){
        for(int i=0;i<s.length();i++){
            string word="";
            while(s[i]!=' ' && i<s.length()){
                word=word+s[i];
                i++;
            }
            st.push(word);

        }
    
    while(!st.empty()){
        cout<<st.top()<<" ";
         st.pop();
    }
    }


    void reverseWords (string s)
    {
        //code here.
        stack<char>st;
        for(int i=0;i<s.length();i++){
            if(s[i]!=' '){
                st.push(s[i]);
            }
            else if(s[i]==' '){
                while(!st.empty()){
                    cout<<st.top();
                    st.pop();
                }
                cout << " ";

            }
            
            
        }
        while(!st.empty()){
                    cout<<st.top();
                    st.pop();
                }
                
        
    }


int main(){
    //rev_sent("hey i am harsh saini");
//    s.push(1);
//    s.push(2);
//    s.push(3);
//    s.push(4);
reverseWords("harsh saini from");

}