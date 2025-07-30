#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int>v;
    v.push_back(50);
    v.push_back(90);
     v.push_back(60);
    v.push_back(80);
    v.push_back(70);
     v.push_back(60);
    int x=60;
    int idx=-1;
    // for(int i=0;i<v.size();i++){
    //     if(v[i]==x) idx=i;

    // }
    // cout<<idx;

    // another way
    for(int i=v.size()-1;i>=0;i--){
        if(v[i]==x){
             idx=i;
        break;}
    }
    cout<<idx;
}