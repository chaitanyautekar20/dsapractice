#include <iostream>
using namespace std;

int main(){
    int x=12 , y=10;
    int* p1=&x ,p2=&y;// this will give error
    // Sysntaxproblem.cpp: In function 'int main()':
//Sysntaxproblem.cpp:6:20: error: invalid conversion from 'int*' to 'int' [-fpermissive]    
  //   int* p1=&x ,p2=&y;// this will give error
                    ^~
}