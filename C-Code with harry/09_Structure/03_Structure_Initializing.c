#include<stdio.h>
#include<string.h>
struct employee{
    int code;
    float salary;
    char name[20];
};
int main(){
    struct employee e1={100,6842.768,"sonu"};
    printf("%d\t%f\t%s\n",e1.code,e1.salary,e1.name);

    return 0;
}