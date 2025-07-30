#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
class circularList{
    Node*head;
    Node*tail;
public:
    circularList(){
        head=tail=NULL;
    }
    void insertAtHead(int val){
     Node* newNode=new Node(val);
     if(tail==NULL){
        head=tail=newNode;
        tail->next=head;
     }
     else{
        newNode->next=head;
        head=newNode;
        tail->next=head;
     }
    }
    void insetAtTail(int val){
        Node* newNode=new Node(val);
        if(head==NULL){
           head=tail=newNode;
           tail->next=head;
        }
        else{
           newNode->next=head;
           tail->next=newNode;
           tail=newNode;
        }
    }

    void deleteAtHead(){
        if(head==NULL){
            cout<<"ll is empty";
        }
        else if(head==tail){
            delete head;
            head=tail=NULL;
        }
        else{
            Node*temp=head;
            head=head->next;
            tail->next=head;
            temp->next=NULL;
            delete temp;
        }
        
    }

    void deleteAtTail(){
        if(head==NULL){
            cout<<"ll is empty";
        }
        else if(head==tail){
            delete head;
            head=tail=NULL;
        }
        else{
            Node*temp=tail;
            Node* prev=head;
            while (prev->next!=tail)
            {
                prev=prev->next;
            }
            tail=prev;
            tail->next=head;
            temp->next=NULL;
            delete temp;
        }
    }

    void print(){
        
        if(head==NULL){
            cout<<"ll is empty";
        }
        cout<<head->data<<"->";
        Node*temp =head->next;
        while(temp!=head){
        cout<<temp->data<<"->";
           temp= temp->next;
        }
        cout<<temp->data<<endl;
    }
};


int main(){
    circularList cLL;
    cLL.insertAtHead(1);
    cLL.insertAtHead(1);
    cLL.insetAtTail(2);
    cLL.deleteAtHead();
    cLL.deleteAtTail();
    cLL.print();
    return 0;
}