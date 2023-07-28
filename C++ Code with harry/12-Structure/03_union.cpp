#include<iostream>
using namespace std;
union student{
    char name[50];
    double student_id;
    int year;
};

int main(){
    union student s1;
    s1.year=2;
    s1.student_id=431221010038;
    cout<<"The name of student s1 is: "<<s1.name<<endl;
    cout<<"The student id of student s1 is: "<<s1.student_id<<endl;
    cout<<"The year of student s1 is: "<<s1.year<<endl;
    return 0;
}