#include<stdio.h>
int main(){
    int marks[4];
    printf("enter the marks of marks[1]\n");
    scanf("%d",&marks[0]);
    printf("enter the marks of marks[2]\n");
    scanf("%d",&marks[1]);
    printf("enter the marks of marks[3]\n");
    scanf("%d",&marks[2]);
    printf("enter the marks of marks[4]\n");
    scanf("%d",&marks[3]);
    printf("marks[1]:%d\n marks[2]:%d\n marks[3]:%d\n marks[4]:%d\n",marks[0],
    marks[1],marks[2],marks[3]);
    return 0;
}