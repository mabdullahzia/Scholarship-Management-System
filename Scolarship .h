#ifndef SCHOLARSHIP_H
#define SCHOLARSHIP_H
#include"Student.h"
#include<vector>
using namespace std;

class ScholarshipSystem{
private:
    vector<Student> students;
public:
    void addStudent(string n,int dept,float marks,bool need);
    void displayAll();
    void displayByDepartment(int dept);
    void displayTopScholarships(int n);
};

#endif
