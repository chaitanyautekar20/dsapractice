#include<iostream>
using namespace std;

class student{
    public:
    string name;
    double cgpa;
    // copy constotor
    student(student &orgobj){// pass by reference
        cout<<"this our con";
        this->name=orgobj.name;
        this->cgpa=orgobj.cgpa;
    }
    student(string name,double cgpa){// parametarized constor
        this->name=name;
        this->cgpa=cgpa;
    }
    getifo(){
        cout<<"Name:"<<name<<endl;
        cout<<"cgpa"<<cgpa<<endl;
    }
};


int main(){
    student s1("Ram",9.9);
    s1.getifo();

    student s2(s1);
    s1.getifo();

}