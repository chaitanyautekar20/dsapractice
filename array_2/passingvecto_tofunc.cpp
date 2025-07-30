#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void change(vector <int>a){
    a[0]=100;
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
}
    void rchange(vector <int>&a){
        a[0]=1000;
    }


int main(){
    vector<int>v;
    v.push_back(50);
    v.push_back(90);
    v.push_back(80);
    v.push_back(70);
    v.push_back(95);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    change(v);
    // here it does not change the value .
    //just pass by value
    cout<<endl;
for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
cout<<endl;
    //pass by reference

rchange(v);
for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
cout<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}