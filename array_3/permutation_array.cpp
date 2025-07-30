#include <iostream>
#include <vector>
using namespace std;

void permut_next(vector<int>&v){
    int n=v.size();
    // finding pivot index
    int idx = -1;
    for(int i=n-2;i>=0;i--){
        if(v[i]<v[i+1]){
            idx = i;
            break;
        }
    }
    if (idx==-1){// if array is higest
        reverse(v.begin(),v.end());
    }
    // sorting after pivot / reverse
    reverse(v.begin()+idx+1,v.end());
    // finding the just greatre element than idx
    int j=-1;
    for(int i=idx+1;i<n;i++){
        if(nums[i]>nums[idx]){
            j=i;
            break;
        }
    }
    // 3) swaping idx and idx+1;
    int temp = v[idx];
    v[idx]=v[j];
    v[j]=temp;

}
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(4);
    v.push_back(3);
}