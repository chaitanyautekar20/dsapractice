#include<iostream>
#include<string>
using namespace std;

class teacher{
  private:
    double salary;
  public:
  //non-paramaterized constructor
//   teacher(){
//     cout<<"hi, I am aconstructor ";
//     // initationalize in constructor
//     department="cs";
//   }
  //paramaterized constractor
  teacher(string name,string department,string subject,double salary){
    this->name=name;
    this->department=department;
    this->subject=subject;
    this->salary=salary;
  }

  // copy constrotor 
  teacher(teacher &oriobj){ // pass by referenc
    cout<<"I am copy constrotor";
    this->name = oriobj.name;
    this->department=oriobj.department;
    this->subject=oriobj.subject;
    this->salary=oriobj.salary;
  }
    string name;
    string department;
    string subject;
    
    void changedep(string newdep){
        department=newdep;
        cout<<department<<endl;
    }
    //setter
    void setsal(double sal){
        salary=sal;
    }
    //getter
    double getsal(){
        return salary;
    }
    void getinfo(){
      cout<<"name"<<name<<endl;
      cout<<"department"<<department<<endl;
      cout<<"subject"<<subject<<endl;
      cout<<getsal();
    }
};

class account{
    private:
    double bal;
    string password;//data hiding
    public:
    string usre;
    string accid;

};

int main(){

    // teacher t1;// call constror or automatical make constructor
    // teacher t2;
    // t1.name="Ram";
    // t1.department="It";
    // t1.subject="Oop";
    // // t1.salary=1000000;
    // t1.changedep("Computer");

    // cout<<"name"<<t1.name<<endl;
    // cout<<"department"<<t1.department<<endl;
    // cout<<"subject"<<t1.subject<<endl;
    // t1.setsal(1200);
    // cout<<"slary"<<t1.getsal()<<endl;
    // cout<<t2.department;
 
    teacher t1("Chaitanya","Information technology","cpp",12000);
   t1.getinfo();
   teacher t2(t1);// copy constructor cpp will make default copy constroctor if we will not make it.
   t2.getinfo();
    return 0;


}