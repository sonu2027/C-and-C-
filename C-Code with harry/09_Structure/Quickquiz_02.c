//Complete this show function to display the content of the employee.
#include<stdio.h>
#include<string.h>
struct employee {
     int code;
    float salary;
    char name[20];
};
void show(struct employee emp){
printf("the code of employee is: %d\n",emp.code);
printf("the salary of employee is: %f\n",emp.salary);
printf("the name of employee is: %s\n",emp.name);
}
int main(){
    struct employee e1;
    struct employee *ptr;
    ptr=&e1;
   // (*ptr).code=100; ==== ptr->code=100;
   (*ptr).code=100;
   (*ptr).salary=1000.092;
   strcpy((*ptr).name,"sonu");

    show(e1);
    printf("the code of employee is: %d\n",e1.code);

    return 0;
}