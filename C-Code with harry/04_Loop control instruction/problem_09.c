/*8. Write a program to calculate the factorial of a given number using for loop.
9. Repeat 8 using a while loop.*/
#include<stdio.h>
int main(){
int i=0,n,fact=1;
printf("enter n\n");
scanf("%d",&n);
while(i<n){
    fact=fact*(i+1);
    i++;
}
printf("%d",fact);
return 0;
}