#include"Scholarship.h"
#include<iostream>
#include<algorithm>
using namespace std;

// Student methods
Student::Student(string n,Department d,float m,bool need){
    name=n;dept=d;marks=m;needBased=need;scholarshipPercent=0;
}

void Student::calculateScholarship(){
    // Merit-based
    if(marks>=90) scholarshipPercent=100;
    else if(marks>=75) scholarshipPercent=50;
    else scholarshipPercent=25;
    // Need-based adjustment
    if(needBased) scholarshipPercent+=10;
    if(scholarshipPercent>100) scholarshipPercent=100;
}

void Student::display() const{
    cout<<"Name:"<<name<<" Dept:"<<dept<<" Marks:"<<marks
        <<" Scholarship:"<<scholarshipPercent<<"%\n";
}

// ScholarshipSystem methods
void ScholarshipSystem::addStudent(string n,int d,float marks,bool need){
    Student s(n,static_cast<Department>(d),marks,need);
    s.calculateScholarship();
    students.push_back(s);
}

void ScholarshipSystem::displayAll(){
    for(auto &s:students) s.display();
}

void ScholarshipSystem::displayByDepartment(int d){
    for(auto &s:students) if(s.getDept()==static_cast<Department>(d)) s.display();
}

void ScholarshipSystem::displayTopScholarships(int n){
    vector<Student> temp=students;
    sort(temp.begin(),temp.end(),[](Student &a,Student &b){return a.getScholarship()>b.getScholarship();});
    for(int i=0;i<n && i<temp.size();i++) temp[i].display();
}
