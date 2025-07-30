#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int> v={1,2,3,4};
    cout<<"begin value"<<*(v.begin())<<endl;
    cout<<"end will giev the garbage value"<<*(v.end());

}