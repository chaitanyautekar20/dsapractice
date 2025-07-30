#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
 vector <int> v;
    v.push_back(1);
   v.push_back(2);
    v.push_back(4);
    v.push_back(2);
    v.push_back(5);
    v.push_back(2);
    v.push_back(2);
    int n=v.size();
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        cout<<v[i];
    }
    cout<<endl;
    cout<<v[(v.size())/2];
}