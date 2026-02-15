#include"Student.h"
void Student::calculateScholarship(){
    if(marks>=90) scholarship=100;
    else if(marks>=75) scholarship=50;
    else scholarship=0;
}
