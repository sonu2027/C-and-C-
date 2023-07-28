/*8. Write a program to calculate the factorial of a given number using for loop
*/
#include<stdio.h>
int main(){
int n,fact=1;
printf("enter n\n");
scanf("%d",&n);
for(int i=0;i<n;i++){
    fact=fact*(i+1);
}
printf("%d",fact);
return 0;
}