/*Write a program to store the details of 3 employees from user-defined
data. Use the structure declared above.*/
#include<stdio.h>
#include<string.h>
struct employee {
     int code;
    float salary;
    char name[20];
};
int main(){
    struct employee e1,e2,e3;
    printf("enter the value of e1 code: \n");
    scanf("%d",&e1.code);
    printf("enter the value of e1 salary: \n");
    scanf("%f",&e1.salary);
    printf("enter the value of e1 name: \n");
    scanf("%s",e1.name);

    printf("enter the value of e2 code: \n");
    scanf("%d",&e2.code);
    printf("enter the value of e2 salary: \n");
    scanf("%f",&e2.salary);
    printf("enter the value of e2 name: \n");
    scanf("%s",e2.name);

    printf("enter the value of e3 code: \n");
    scanf("%d",&e3.code);
    printf("enter the value of e3 salary: \n");
    scanf("%f",&e3.salary);
    printf("enter the value of e3 name: \n");
    scanf("%s",e3.name);
    
    return 0;
}