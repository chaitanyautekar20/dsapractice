#include <iostream>
#include<vector>
using namespace std;
void display(vector<int> &a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    // int x;
    // cout<<"enter the target";
    // cin>>x;
    vector<int>v;
    int n;
    cout<<"enter the vector size";
    cin>>n;
    cout<<"enter the elements";
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    display(v);

vector<int>v2(v.size());

for(int i=0;i<v2.size();i++){
    int j=v.size()-1-i;
    v2[i]=v[j];
}
display(v2);
// this I tried my self
    // for(int i=v.size()-1;i>=0;i--){
    //     int x;
    //     v[i]=x;
    //     v2.push_back(x);
    // }
    // for(int i=0;i<=v2.size()-2;i++){
    //     cout<<v2[i]<<" ";
    // }



}