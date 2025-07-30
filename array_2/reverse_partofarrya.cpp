#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector<int> &a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void reversepart(int i,int j,vector<int>&v){
   while(i<=j){
   
    int temp=v[i];
    v[i]=v[j];
    v[j]=temp;
    i++;
    j--;
   }
}
int main(){
    vector<int>v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(5);
    v1.push_back(6);
    v1.push_back(7);
    display(v1);

    reversepart(0,2,v1);
    display(v1);

}