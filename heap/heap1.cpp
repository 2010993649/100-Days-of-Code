#include<iostream>
using namespace std;
void insert(int arr[],int i){
    int temp=arr[i];
    while(i>1 && temp>arr[i/2]){
        arr[i]=arr[i/2];
        i=i/2;
    }
    arr[i]=temp;
}
void createHeap(int arr[],int n){
    for(int i=1;i<=n;i++){
        insert(arr,i);
    }
    
}
int main(){
    int arr[]={10,20,30,25,5,40,35};
    createHeap(arr,7);
    for(int i=1;i<=7;i++){
        cout<<arr[i]<<" ";
    }

}