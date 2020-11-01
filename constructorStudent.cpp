#include<iostream>
using namespace std;

class Student{
    public:
    string name;
    string collegeName;
    string major;
    double gpa;
    // constructor
    Student(string aname,string acollegeName,string amajor,double agpa){
        name=aname;
        collegeName=acollegeName;
        major=amajor;
        gpa=agpa;

    }
    // Function
    bool hasHonors(){
        if(gpa>=9.8){
            return true;
        }
        return false;
    }

};
int main()
{
    Student student1("SAGAR","Viva college","information technology",9.8);
    cout<<student1.name<<endl;
    cout<<student1.collegeName<<endl;
    cout<<student1.major<<endl;
    cout<<student1.gpa<<endl;
    cout<<student1.hasHonors();

    return 0;

}