#include<iostream>
using namespace std;


class Node{
    public:
    int data;
    Node* next;
    Node(int value){
        data=value;
        next=NULL;
    }
}

class stack(){
    Node* top;
    public:
    stack(){
        top==NULL;
    }
    void push(int value){
        Node* newNode=new Node(value);
        newNode->next=top;
        top=newNode;

    }
    void pop(){
        if(top==-1){
            cout<<"sack is empty";
        }
        Node * temp=top;
        cout<<top->data;
        top=top->next;

        delete temp;
    }

    void top(){
        if(top==-1){
            cout<<"stack is empty";
        }
        cout<<top->data;
    }

    void display(){
        if(top==NULL){
            cout<<"the stack is empty";
            return;
        }
        Node * temp=top;
        while(temp!=NULL){
            cout<<temp->data;
            temp=temp->next;
        }
    }

}

int main(){

}