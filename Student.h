#ifndef STUDENT_H
#define STUDENT_H
#include<string>
using namespace std;

class Student{
private:
    string name;
    float marks;
    float scholarship;
public:
    Student(string n,float m){name=n;marks=m;scholarship=0;}
    void calculateScholarship();
    void display() const{
        cout<<"Name:"<<name<<" Marks:"<<marks<<" Scholarship:"<<scholarship<<"%\n";
    }
};

#endif
