/*6. Write a recursive function to calculate the sum of first n natural numbers.*/
#include<stdio.h>
int sum(int n){
    if(n==1)
    return 1;
   return n+sum(n-1);
}
int main(){
int n;
printf("enter n\n");
scanf("%d",&n);
printf("%d",sum(n));
return 0;
}