#include<iostream>
#include<vector>
using namespace std;

// function for bsearch
int search(vector<int> v , int target){
    int lo=0;
    int hi=v.size()-1;
    while(lo<=hi){
        int mid = (hi+lo)/2;
        if(v[mid]==target) return mid;
        else if(v[mid>target])hi=mid-1;
        else lo =mid + 1;
    }
    return -1;
}



int main(){
    vector <int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
int n=v.size();
cout<<"size"<<n<<endl;

int s=search(v,2);
cout<<s<<endl;

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }



}