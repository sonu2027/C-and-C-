#include<iostream>
using namespace std;
struct student{
    char name[50]="Sonu Mondal";
    double student_id=431221010038;
    int year=2;
};

int main(){
    struct student s1;
    cout<<"The name of student s1 is: "<<s1.name<<endl;
    cout<<"The student id of student s1 is: "<<s1.student_id<<endl;
    cout<<"The year of student s1 is: "<<s1.year<<endl;
    return 0;
}