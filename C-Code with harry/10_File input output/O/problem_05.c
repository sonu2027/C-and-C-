/*Make a program to input student information from a user and enter it to be a file*/
#include<stdio.h>
int main(){
FILE *fptr;
fptr=fopen("write.txt","w");
char name[20];
int roll_no;
int age;
printf("enter name\n");
scanf("%s",name);
printf("enter roll no\n");
scanf("%d",&roll_no);
printf("enter age\n");
scanf("%d",&age);

fprintf(fptr,"Student name:%s\n",name);
fprintf(fptr,"Roll no:%d\n",roll_no);
fprintf(fptr,"Age:%d\n",age);
fclose(fptr);
}