#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    vector<int> g;
    g.push_back(2);
    g.push_back(3);
    g.push_back(1);

    // sort 
    sort(g.begin(),g.end());
    sort(v.begin(),v.end());

    int count = 0;
    int mn = min(g.size(),v.size());
    for(int i=0;i<mn;i++){
        if(g[i]>=v[i]) count++;
    }
    cout<<endl;
    cout<<count;
    // not so optimezed
}