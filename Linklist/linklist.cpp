#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next =NULL;
    }
};

class List{
    // this is private
    Node* head;
    Node* tail;
    public:
    list(){
        // inittally the linklist will be null
        head=tail=NULL;
    }
    // ~List() {
        // while (head) {
            // Node* temp = head;
            // head = head->next;
            // delete temp;
        // }
    // }
    
    // push in the list
 void push_frontLL(int val){
    Node* newnode= new Node(val); //but this is the dynamic memory alocation dynamic object which after oject also will persist
    // Node newNode(val);// static memory this will create the problem and memory alocation wil be the problem

    if(head==NULL){
        // firts node
        head=tail=newnode;
        return;
    } else {
      newnode->next = head;
      head=newnode;   
    }
 }

 void push_backll(int val){
    Node * newnode=new Node(val);
    if(head==NULL){
        head=tail=newnode;
    }
    else{
        tail->next=newnode;
        tail=newnode;
    }
 }

 void printll() {
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
 }   
};



int main(){
    List ll;
    ll.push_frontLL(1);
    ll.push_frontLL(2);
    ll.push_frontLL(3);
    ll.push_backll(4);
    ll.printll();
    return 0;
}