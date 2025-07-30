#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(6);
    v.push_back(13);
    v.push_back(16);
    v.push_back(63);
    v.push_back(67);
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
cout<<endl;
    v.pop_back();
    for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
}   