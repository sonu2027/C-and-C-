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
    // Decalaring e1 and pointer
    // struct employee e1;
    emp e1;   // struct employee can replace with emp
    emp *ptr; // struct employee can replace with emp

    // pointing ptr to e1
    ptr = &e1;

    // set the member value for e1
    ptr->code = 100;
    ptr->salary = 100;
    strcpy(ptr->name, "sonu");
    show(e1);
    return 0; 
}