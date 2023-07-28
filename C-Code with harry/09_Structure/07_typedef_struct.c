#include <stdio.h>
#include <string.h>
typedef struct employee
{
    int code;
    float salary;
    char name[20];
} emp;
void show(emp emp1){
printf("the code of employee is: %d\n",emp1.code);
printf("the salary of employee is: %f\n",emp1.salary);
printf("the name of employee is: %s\n",emp1.name);
}
int main()
{
    //struct employee e1; = emp e1;
    emp e1;   
    e1.code=100; 
    e1.salary=10.08;
    strcpy(e1.name,"Sonu");
    printf("%d\n",e1.code);
    printf("%f\n",e1.salary);
    printf("%s\n",e1.name);
    return 0; 
}