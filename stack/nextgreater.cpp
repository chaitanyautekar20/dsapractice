#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main(){
    vector<int> arr={6,8,0,1,3};
    //next greatre element 
    stack<int> s;
    vector<int> Ng(arr.size(),0);
    for(int i=arr.size()-1;i>=0;i--){
        while(s.size()>0 && s.top()<=arr[i]){
            s.pop();
        }
        if(s.empty()){
            Ng[i]=-1;
        }
        else{
           Ng[i]= s.top();
        }
        s.push(arr[i]);

    }
    
    //print the ans
    for(int val :Ng){
        cout<<val<<" ";
    }
    cout<<endl;
    
    
    return 0;

}

