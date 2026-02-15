#ifndef STUDENT_H
#define STUDENT_H
#include<string>
using namespace std;

enum Department{CS,Engineering,Medical};

class Student{
private:
    string name;
    Department dept;
    float marks;
    float scholarshipPercent;
    bool needBased;
public:
    Student(string n,Department d,float m,bool need=false);
    void calculateScholarship();
    void display() const;
    Department getDept() const{return dept;}
    float getScholarship() const{return scholarshipPercent;}
};

#endif
