#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
 int main(){
    // ["flower","flow","flight"]
    vector<string> v;
    v.push_back("flower");
    v.push_back("flow");
    v.push_back("flight");
    // v.push_back("raghav");
    // v.push_back("amit");
    //lexograpicaly 
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    cout<<endl;
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
}


