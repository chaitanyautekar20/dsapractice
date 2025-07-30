#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void sort01(vector<int>&v){
    int n=v.size();
    int noZ=0;
    int noO=0;
    for(int i=0;i<n;i++){
        if(v[i]==0) noZ++;
        else noO++;
    }
    // filling elements

    for(int i=0;i<n;i++){
        if(i<noZ) v[i]=0;
        else v[i]=1;
    }

}

// two pointer function
sort01p(vector<int>&v){
    int i=0;
    int j=v.size()-1;

    while(i<j){
        if(v[i]==0) i++;
         if(v[j]==1){
             
             j--;
         }
         if(i>j) break;
        if(v[i]==1 && v[j]==0){
            int temp;
           temp = v[i];
           v[i]=v[j];
           v[j]=temp;
            i++;
            j--;
        }
        
    }
}



int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
   // sort(v.begin(),v.end());

  // sort01(v);
  sort01p(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}