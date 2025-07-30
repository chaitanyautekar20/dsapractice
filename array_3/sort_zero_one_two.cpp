#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>&v){
    int n=v.size();
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
// two pass
void sort_1(vector<int>&v){
    int n=v.size();
    int noz=0;
    int noO=0;
    int notw=0;
    for(int i=0;i<n;i++){
        if(v[i]==0) noz++;
       else if(v[i]==1) noO++;
        else notw++;
    }

    for(int i=0;i<n;i++){
        if(i<noz) v[i] = 0;
       else if(i<(noz+noO)) v[i] = 1;
       else v[i]= 2 ; 
    }
}
// one pass
    void sort_2(vector<int>&v){
        int low = 0;
        int high = v.size()-1;
        int mid = 0;
        while(mid<=high){
            if(v[mid]==2){
                int temp = v[mid];
                v[mid]=v[high];
                v[high]=temp;
                high--;
            }

            else if(v[mid]==0){
                int temp = v[mid];
                v[mid]=v[low];
                v[low]=temp;
                low++;
                mid++;
            }

            else {//mid==1
                mid++;
            }

        }
    }


int main(){
    vector<int>v ;
    v.push_back(1);
    v.push_back(2);
    v.push_back(0);
     v.push_back(2);
      v.push_back(1);
       v.push_back(0);

    display(v);
    //sort_1(v);
    //sort_2(v);
 //  display(v);



}