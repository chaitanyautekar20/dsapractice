#include <iostream>
using namespace std;

class student{
    public:
    string name;
    double*cgpaptr;

    student(string name,double cgpa){//  parametarised  constrotor
        this->name=name;
        cgpaptr= new double;
        *cgpaptr=cgpa;
    }

    // student(student&orgobj){// copy constrotor shallow
    //     this->name=orgobj.name;
    //     this->cgpaptr=orgobj.cgpaptr;
    // }

    student(student &orgobj){
        this->name=name;
        cgpaptr= new double;
        *cgpaptr= *orgobj.cgpaptr;
    }
    void getinfo(){
        cout<<"name"<<name;
        cout<<"cgpa"<<*cgpaptr;
    }
};


int main(){
    student s1("Chaitanya",9.99);
    student s2(s1);
    s1.getinfo();
    *(s2.cgpaptr)=9.10;
    s1.getinfo();
    s2.name="Ram";
    s2.getinfo();

    return 0;
}