#include <iostream>
using namespace std;
int main(){
    int x=20;
    int arr[]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int lo=0;
    int hi=x;
    while (lo<=hi)
    {
        int mid=lo+(hi-lo)/2;
        long long m=(long long)mid;
        long long y=(long long)x;
        if((m*m)==y) cout<<mid;
        else if((m*m)>y){ hi = mid-1;}
        else lo =mid+1;
    }
    cout<<hi;
}