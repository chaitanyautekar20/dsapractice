#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;// you need mention the size
    v.push_back(9);
    //cout<<v.size()<<endl; 
    cout<<v.capacity()<<endl;  
    v.push_back(1);
    //cout<<v.size()<<endl; 
    cout<<v.capacity()<<endl;  
    v.push_back(6);
    //cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;   
    v.push_back(10);
// cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    // v[0]=9; thi is not possible
        cout<<v[0]<<" ";
} 

