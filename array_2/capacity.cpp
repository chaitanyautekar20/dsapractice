#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int>v;
    v.push_back(2);
      v.push_back(28);
        v.push_back(22);
          v.push_back(32);
            v.push_back(27);
    cout<<"size"<<v.size()<<endl;
    cout<<"capactiy"<<v.capacity()<<endl;
    v.pop_back();
    v.pop_back();
    cout<<"size"<<v.size()<<endl;
    cout<<"capactiy"<<v.capacity()<<endl;
    
    }