#include<stdio.h>
#include<string.h>
struct employee {
     int code;
    float salary;
    char name[20];
};
int main(){
    struct employee e1={202,50000,"Sonu"};
    printf("%d\n",e1.code);
    struct employee *ptr=&e1;
   // (*ptr).code=100; = ptr->code=100;
    printf("%d\n",(*ptr).code);
    printf("%d\n",ptr->code);
    return 0;
}