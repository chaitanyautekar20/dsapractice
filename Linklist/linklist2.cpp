 



#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr; // Modern C++
    }
};

class List {
    Node* head;
    Node* tail;

public:
    List() {
        head = tail = nullptr;
    }

    ~List() {
        while (head) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }

    void push_frontLL(int val) {
        Node* newnode = new Node(val);

        if (head == nullptr) {
            head = tail = newnode;
        } else {
            newnode->next = head;
            head = newnode;
        }
    }

    void push_backll(int val) {
        Node* newnode = new Node(val);
        if (head == nullptr) {
            head = tail = newnode;
        } else {
            tail->next = newnode;
            tail = newnode;
        }
    }

    void pop_frontll(){
        if(head==nullptr){
            cout<<"ll is null";
            return;
        }

        Node *temp=head;
        head=head->next;
        temp->next=nullptr;
        delete temp;
    }

    void pop_backll(){
        if(head==NULL){
            cout<<"LL is empty";
            return;
        }
        Node *temp=head;
        while (temp->next!=tail)
        {
            temp=temp->next;
        }
        temp->next=nullptr;
        delete tail;
        // delete does not delete the variable but it delete the heap memory alocated to the variable
        tail=temp;
    }

    void insert(int val,int pos){
        if(pos<0){
            cout<<"invalid pos";
            return;
        }
        if(pos==0){
            push_frontLL(val);
            return;
        }
        Node *temp =head;
        for(int i=0;i<pos-1;i++){
            if(temp==nullptr){
                cout<<"Invalid pos";
                return;
            }
            temp=temp->next;
        }
        Node*newNode=new Node(val);
        newNode->next=temp->next;
        temp->next=newNode;
    }

    void printll() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    int search(int key){
        Node* temp=head;
        int idx=0;
        while (temp!=nullptr)
        {
            if(temp->data==key){
                return idx;
            }
            temp=temp->next;
            idx++;
        }
       return -1; 
    }
};

int main() {
    List ll;
    ll.push_frontLL(1);
    ll.push_frontLL(2);
    ll.push_frontLL(3);
    ll.push_backll(4);
    ll.pop_frontll();
    ll.printll();  // Output: 3 -> 2 -> 1 -> 4 -> NULL
    ll.pop_backll();
    ll.printll();
    ll.insert(10,1);
    ll.printll();
    cout<<ll.search(2)<<endl;
    return 0;
}
