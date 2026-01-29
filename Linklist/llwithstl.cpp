#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> ll;
    ll.push_front(10);
    ll.push_back(20);
    ll.push_front(30);
    for(int i:ll) cout<<i<<"->";
    cout<<endl;
    ll.pop_back();
    ll.pop_front();
    auto it=ll.begin();
    advance(it,1);
    ll.insert(it,2);
    cout<<endl;
    for(int i:ll) cout<<i<<"->";

}