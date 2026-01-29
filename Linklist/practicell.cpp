#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

void insertatBegning(int value,Node* &head){
    Node * newNode=new Node();
    newNode->data=value;
    newNode->next=head;
    head=newNode;
}

void insertatEnd(int value,Node* &head){
    Node* newNode=new Node();
    newNode->data=value;
    newNode->next=NULL;

    if(head==NULL){
        head= newNode;
        return;
    }
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;    
}

void insertatPosition(int value,Node* &head,int pos){
    if(pos==1){
        insertatBegning(value,head);
    }
    Node* newNode=new Node();
    newNode->data=value;
    Node* temp=head;
    for(int i=1;i<pos-1&&temp->next!=NULL;i++){
        temp=temp->next;
    }
    if(temp==NULL){
        return;
    }
    newNode->next=temp->next;
    temp->next=newNode;
}

void displayll(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data;
        temp=temp->next;
    }
    cout<<"NULL\n";
}

//update the node value
void updateNodevalue(int Newvalue,int Oldvalue,Node* &head){
    Node* temp=head;
    while (temp!=NULL)
    {
        if(temp->data=Oldvalue){
            temp->data=Newvalue;
            return;
        }
        temp=temp->next;
    }
    
}

// delete
void deleteAtbegning(Node* &head){
    if(head==NULL)return;
    Node* temp=head;
    temp->next=head;
    delete temp;
}

void deleteAtend(Node* &head){
    if(head==NULL) return;
    if(head->next==NULL){
        delete head;
        head=NULL;
        return;
    }
    Node* temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    delete temp->next;
    temp->next=NULL;
}

void deleteatpos(int pos,Node* &head){
    if(pos==1){
        deleteAtbegning(head);
        return ;
    }
    Node* temp=head;
    for(int i=0;i<pos-1;i++){
        temp=temp->next;
    }
    if(temp==NULL || temp->next==NULL)return;
    Node* deletenode=temp->next;
    temp->next=temp->next->next;
    delete deletenode;  

}
int main(){
    Node* head=NULL;
    insertatBegning(10,head);
    insertatEnd(20,head);
    insertatPosition(30,head,2);
    displayll(head);
}