#include<iostream>
#include<list>
using namespace std;

class stack{
    list<int> ll;
public:
    void push(int val){//O(1)
        ll.push_front(val);
    }

    void pop(){//O(1)
        ll.pop_front();
    }
    int top(){
        return ll.front();
    }

    bool empty(){
        return ll.size()==0;
    }
};


int main(){
    stack s;
    s.push(1);
    // cout<<s.top();
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}