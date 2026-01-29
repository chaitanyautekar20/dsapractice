#include<iostream>
using namespace std;

class stack{
    int arr[size];
    int top;
    public:
    stack{
        top=-1;
    }
        void push(int value){
            if(top==size-1){
                cout<<"stack is full";
                return;
            }
            arr[++top]=value;

        }

        void pop(){
            if(top==-1){
                cout<<"stack is empty";
            }
            arr[top--];
        }
        void top(){
            if(top==-1){
                cout<<"stack is empty";
                return ;

            }
            cout<<arr[top];
        }
        void display(){
            if(top==-1){
                cout<<"stack is empty";
            }
            for(int i=top;i>0;i--){
                cout<<arr[i]<<" ";
            }
        }
}

int main(){
    
}