#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector <int> g;
    g.push_back(7);
    g.push_back(8);
    g.push_back(9);
    g.push_back(10);
    
    for(int i=0;i<g.size();i++){
        cout<<g[i]<<" ";
    }

    vecotr <int> s;
    s.push_back(5);
    s.push_back(6);
    s.push_back(7);
    s.push_back(8);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
// traveling in the array to find the cookies
for(int i=0;i<s.size();i++){
    if(s[i]>g[0]){
        idx = i;
        break;
    }
}

if(idx==-1) return 0;
int i =0;
int j = idx;
while(i<g.size() && j<s.size()){
    if(s[j]>=g[i]) count++;
    i++;
    j++;
}
cout<<count; // sitll not able to pass test case
}