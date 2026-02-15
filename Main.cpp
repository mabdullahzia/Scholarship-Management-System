#include<iostream>
#include<vector>
#include"Student.h"
using namespace std;
#include"Scholarship.cpp"

int main(){
    vector<Student> students; int choice;
    do{
        cout<<"1.AddStudent 2.ViewAll 0.Exit:";cin>>choice;
        switch(choice){
            case 1:{
                string n; float m; cin.ignore();
                cout<<"Name:";getline(cin,n);
                cout<<"Marks:";cin>>m;
                Student s(n,m); s.calculateScholarship();
                students.push_back(s); break;
            }
            case 2: for(auto &s:students) s.display(); break;
        }
    }while(choice!=0);
}
