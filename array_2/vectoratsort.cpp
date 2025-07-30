#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int>v;
    v.push_back(50);
    v.push_back(90);
    v.push_back(80);
    v.push_back(70);
    v.push_back(95);

    // sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;

       sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
}