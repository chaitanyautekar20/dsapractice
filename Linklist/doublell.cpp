#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node* prev;
    //constructor for the node for the putting of the value
    Node(int val){
        data=val;
        next=prev=NULL;
    }
};

class DoublyList{
    Node* head;
    Node* tail;
public:
// constructor
    DoublyList(){
        head=tail=NULL;
    }
    void push_front(int val){
        Node* newNode=new Node(val);
        if(head==NULL){
            head=tail=newNode;
        }else{
            newNode->next=head;
            head->prev=newNode;
            head=newNode;
        }
    }

    void push_back(int val){
        Node *newNode=new Node(val);
        if(head==NULL){
            head=tail=newNode;
        }else{
            newNode->prev=tail;
            tail->next=newNode;
            tail=newNode;
        }
    }
    void pop_front(){
        if(head==NULL){
            cout<<"DLL is empty";
        }
        Node* temp=head;
        head=head->next;
        if(head!=NULL){
            head->prev=NULL; // new head
        }
        temp->next=NULL;
        delete temp;
        
    }
    void pop_back(){
        if(head==NULL){
            cout<<"DLL is empty";
        }
        Node*temp=tail;
        tail=tail->prev;
        if(tail!=NULL){
            tail->next=NULL;
        }
        temp->prev=NULL;
        delete temp;
    }
    void print(){
        Node* temp=head;
        while (temp!=NULL)
        {
            cout<<temp->data<<"<=>";
            temp=temp->next;
        }
        cout<<"NULL\n";
    }
};

int main(){
    DoublyList dll;
    dll.push_front(1);
    dll.push_back(2);
    dll.print();
    dll.pop_back();

    // dll.pop_front();
    dll.print();

    return 0;
}