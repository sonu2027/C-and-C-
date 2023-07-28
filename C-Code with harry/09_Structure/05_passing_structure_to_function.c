#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float salary;
    char name[20];
};
void show(struct employee e1){
printf("the code of employee is: %d\n",e1.code);
printf("the salary of employee is: %f\n",e1.salary);
printf("the name of employee is: %s\n",e1.name);
}
int main(){
    struct employee e1={100,50.09,"sonu"};
    show(e1);
    return 0; 
}