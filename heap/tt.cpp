#include<iostream>
using namespace std;
int find(int n){
    int x=n/2;
    cout<<x<<endl;
    int y=x/2;
    cout<<y<<endl;
    int z=n-(x+y);
    cout<<z;
}

int main(){
   find(18);
}