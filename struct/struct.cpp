#include<iostream>
using namespace std;
// struct employe
// {
//     int salary;
//     string name;
// }emp;

union money
{
    int apple;
    float banana;
};

int main(){
    union money m1;
    m1.apple=30;
    // emp.salary=1000000000;
    // emp.name="Harry";
    // cout<<emp.salary;
    // cout<<emp.name;
    cout<<m1.apple;
}