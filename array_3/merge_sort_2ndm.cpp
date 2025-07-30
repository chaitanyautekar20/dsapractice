#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&v){
    int n=v.size()-1;
    for(int i=0;i<=n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

vector<int> merge(vector<int>&v1,vector<int>&v2){
    m=v1.size();
    n=v2.size();
    int i=m-1;
    int j=n-1;
    int k = m+n-1;
    while (i>0 && k>0)
    {
        if(v1[i]<v[j]){
            v1[i]=v2[j];
        }

        else {
            //v1[i]>v2[j]
             
        }
        
    }
    
    
}
int main(){
    vector<int>v1(6);
    v1.at(0)=1;
    v1.at(1)=2;
    v1[2]=3;
    display(v1);

    vector<int>v2(3);
    v2.at(0)=2;
    v2.at(1)=5;
    v2.at(2)=6;
    display(v2);



}