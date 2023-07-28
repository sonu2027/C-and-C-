#include<stdio.h>
#include<string.h>
struct employee {
     int code;
    float salary;
    char name[20];
};
int main(){
    struct employee e1;
    e1.code=100;
    e1.salary=7999.098;
    //e1.name="sonu";-----> won't work
    strcpy(e1.name,"sonu");
    printf("%d\n",e1.code);
    printf("%.4f\n",e1.salary);
    printf("%s",e1.name);
    return 0;
}