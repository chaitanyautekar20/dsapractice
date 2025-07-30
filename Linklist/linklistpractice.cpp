# include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    // individual node
    node(int val){
        data=val;
        next=null;
    }
};

// list of nodes

class List{
 Node *head;
 Node *tail;
 
//  first node will have head and tail equal to null
list(){
    head=tail=NULL;
}

void push_frontLL(int val){
    Node * newNode= new Node(val);
    if(head=NULL){
        head=tail=newNode;
        // return;
    }
    else{
        newNode->next=head;
        head=newNode;
    }
}

// printing of ll
 void printll(){
    Node* temp=head;
    while(temp!=NUll){
        cout << temp->data<<" ";
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
    ll.printll();

}