#include<iostream>
#include"Scholarship.h"
using namespace std;
#include"Scholarship.cpp"

int main(){
    ScholarshipSystem sys;
    int choice;
    do{
        cout<<"1.Add Student 2.View All 3.View By Dept 4.Top Scholarships 0.Exit:";cin>>choice;
        switch(choice){
            case 1:{
                string n; int d; float m; char need;
                cout<<"Name:";cin.ignore();getline(cin,n);
                cout<<"Dept(0-CS 1-Eng 2-Med):";cin>>d;
                cout<<"Marks:";cin>>m;
                cout<<"Need-based? (y/n):";cin>>need;
                sys.addStudent(n,d,m,(need=='y'||need=='Y'));
                break;
            }
            case 2: sys.displayAll(); break;
            case 3: int d; cout<<"Dept:";cin>>d; sys.displayByDepartment(d); break;
            case 4: int n; cout<<"Top N students:";cin>>n; sys.displayTopScholarships(n); break;
        }
    }while(choice!=0);
}
