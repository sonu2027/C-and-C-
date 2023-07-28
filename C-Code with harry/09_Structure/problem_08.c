//Enter address(house no,block,city,state) of 5 people
#include<stdio.h>
#include<string.h>
struct people{
    int house_no;
    int block;
    char city[20];
    char state[20];
};
int main(){
    struct people p[5];
    p[0].house_no=0;
    p[0].block=0;
    strcpy(p[0].city,"kolkata");
    strcpy(p[0].state,"west bengal");

    p[1].house_no=1;
    p[1].block=1;
    strcpy(p[1].city,"kolkata");
    strcpy(p[1].state,"west bengal");

    p[2].house_no=2;
    p[2].block=2;
    strcpy(p[2].city,"kolkata");
    strcpy(p[2].state,"west bengal");

    p[3].house_no=3;
    p[3].block=3;
    strcpy(p[3].city,"kolkata");
    strcpy(p[3].state,"west bengal");

    p[4].house_no=4;
    p[4].block=4;
    strcpy(p[4].city,"kolkata");
    strcpy(p[4].state,"west bengal");
printf("address of p[0] is %d\t%d\t%s\t%s\n",p[0].house_no,p[0].block,p[0].city,p[0].state);
printf("address of p[1] is %d\t%d\t%s\t%s\n",p[1].house_no,p[1].block,p[1].city,p[1].state);
printf("address of p[2] is %d\t%d\t%s\t%s\n",p[2].house_no,p[2].block,p[2].city,p[2].state);
printf("address of p[3] is %d\t%d\t%s\t%s\n",p[3].house_no,p[3].block,p[3].city,p[3].state);
printf("address of p[4] is %d\t%d\t%s\t%s\n",p[4].house_no,p[4].block,p[4].city,p[4].state);

   
return 0;
}