#include<iostream>
#include<vector>
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

class Queue{
    Node* head;
    Node* tail;
    public:
    Queue(){
        head=tail=NULL;
    }
    
    void push(int data){//insert at rare means at tail TC ofO(1)
        Node* newNode=new Node(data);
        if(empty()){
            head=tail=newNode;
        }else{
            tail->next=newNode;
            tail=newNode;
        }
    }
    void pop(){//TC O(1)
        if(empty()){
            cout<<"LL is empty";
            return;
        }

        Node* temp=head;
        head=head->next;
        delete temp;
    }
    int front(){//TC O(1)
        if(empty()){
            cout<<"ll is empty";
            return -1;
        }
        return head->data;

    }
    bool empty(){//TC O(1)
        return head==NULL;//Queue is empty
    }
};

int main(){
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    while (!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
    return 0;
}