/*1. Write a program using functions to find the average of three numbers.*/
#include<stdio.h>
float avg(int a,int b){
    return 1.0*(a+b)/2;
}
int main(){
    int x,y;
    printf("enter x and y\n");
    scanf("%d%d",&x,&y);
printf("%.1f",avg(x,y));
return 0;
}