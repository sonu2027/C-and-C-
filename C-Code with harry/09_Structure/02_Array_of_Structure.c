#include<stdio.h>
#include<string.h>
struct employee{
     int code;
    float salary;
    char name[20];
};
int main(){
    struct employee facebook[100];
    facebook[0].code=1;
    facebook[0].salary=7999.098;
    //facebook[0].name="sonu";-----> won't work
    strcpy(facebook[0].name,"sonu");

    facebook[1].code=2;
    facebook[1].salary=7822.098;
    //facebook[1].name="sonu";-----> won't work
    strcpy(facebook[1].name,"satyam");

    facebook[2].code=3;
    facebook[2].salary=7859.098;
    //facebook[2].name="sonu";-----> won't work
    strcpy(facebook[2].name,"ranveer");


    printf("%d\n",facebook[0].code);
    printf("%.4f\n",facebook[0].salary);
    printf("%s\n\n",facebook[0].name);

    printf("%d\n",facebook[1].code);
    printf("%.4f\n",facebook[1].salary);
    printf("%s\n",facebook[1].name);

    printf("%d\n",facebook[2].code);
    printf("%.4f\n",facebook[2].salary);
    printf("%s\n",facebook[2].name);

    return 0;
}