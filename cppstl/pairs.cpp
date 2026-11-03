#include <iostream>
#include <utility>
using namespace std;

int main(){
    pair <int,int> p={1,2};
    cout<<p.first<<" "<<p.second<<endl;
    pair <int, pair<int,int>> pr={1,{2,3}};
    cout<<pr.first<<" "<<pr.second.first<<" "<<pr.second.second<<endl;
    // pair as array
    pair <int, int> arr[]={{1,2},{3,4}};
    cout<<arr[1].first<<endl;
}