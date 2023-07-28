/*
13. Write a program to illustrate the use of an arrow operator -> in C.
*/
#include<stdio.h>
struct student{
    char name[20];
    int roll_no;
};
int main(){
struct student s1={"sonu mandal",38};
struct student s2={"anupam mishra",39};
struct student *ptr=&s1;
struct student *ptrr=&s2;
printf("Name:%s\tRoll no:%d\n",ptr->name,ptr->roll_no);
printf("Name:%s\tRoll no:%d\n",ptrr->name,ptrr->roll_no);
return 0;
}