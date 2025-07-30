#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> s;
    
    s.push(1);
    // cout<<s.top();
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}