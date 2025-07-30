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
cout<<endl;
    vector <int> s;
    s.push_back(5);
    s.push_back(6);
    s.push_back(7);
    s.push_back(8);

    for(int i=0;i<s.size();i++){
        cout<<s[i]<<" ";
    }

    // sort
    sort(g.begin(),g.end());
    sort(s.begin(),s.end());
    int count =0;
    int i=0;
    int j=0;
    while(i<g.size() && j<s.size()){
        if(s[j]>=g[i]){
            count++;
            i++;
            j++;
        }
        else j++;


    }
    cout<<endl;
    cout<<count;
} 