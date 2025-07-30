#include<iostream>
#include<vector>
using namespace std;

int main(){
    // you can directly instialse the vector
    vector <int> v1={1,2,3,4,5};
    v1.pop_back();
    for(int val :v1){
        cout<<val;
    }
    cout<<endl;
    // If we want to keep same value 3 size and elemet 10
    vector <int> v2(3,10);
    for(int val :v2){
        cout<<val;
    }
    cout<<endl;
    // we can intialise the vetor
    vector<int> v3(v1);
    for(int val :v3){
        cout<<val;
    }
    cout<<endl;
// vector
    vector <int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.emplace_back(4);

    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;

    for(int val :v){
        cout<<val;
    }
    cout<<v[1];
    cout<<v.at(1);
// If we want first element and last element at that time we use
cout<<"front"<<v.front();
cout<<"back"<<v.back();
// erase
v.erase(v.begin());
for(int val :v){
        cout<<val;
    }
    cout<<v[1];
    cout<<v.at(1);
// new vector
vector <int> v4={1,2,4};
v.insert(v.begin()+1,3);
for(int val:v4){
    cout<<val;
}
cout<<endl;
v3.clear();
cout<<"ISempty"<<v3.empty();


}