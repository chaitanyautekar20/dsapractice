#include<iostream>
using namespace std;

class CilcularQueue
{
    int* arr;// we are dynamicaly alocating the memeory
    int currSize,cap;
    int f,r;

public:
    CilcularQueue(int size){
        cap=size;
        arr=new int[cap];
        currSize=0;
        f=0;
        r=-1;
    }
    void push(int data){//O(1)
        if(currSize==cap){
            cout<<"Qu is full";
            return;
        }
        r=(r+1)%cap;
        arr[r]=data;
        currSize++;
    }
    void pop(){//O(1)
        if(empty()){
            cout<<"the qu is empty";
            return;
        }
        f=(f+1)%cap;
        currSize--;


    }
    int front(){//O(1)
        if(empty()){
            cout<<"the qu is empty";
            return -1;
        }
        return arr[f];
    }
    bool empty(){//O(1)
        return currSize==0;
    }

    void printarr(){
        for(int i=0;i<cap;i++){
            cout<<arr[i];
        }
        cout<<endl;
    }
};
int main(){
    CilcularQueue cq(3);
    cq.push(1);
    cq.push(2);
    cq.push(3);
    cout<<cq.front()<<endl;
    cq.pop();
    cq.push(4);
    cout<<cq.front()<<endl;
    cq.printarr();
    while(!cq.empty()){
        cout<<cq.front();
        cq.pop();
    }
    cout<<endl;
    return 0;
}