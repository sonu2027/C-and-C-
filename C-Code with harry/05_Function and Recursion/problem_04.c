/*4. Write a program using recursion to calculate the n
th element of the Fibonacci
series.*/
#include<stdio.h>
int fibonacci(int n){
    if(n==3 ||n==2)
    return 1;
return fibonacci(n-1)+fibonacci(n-2);
}
int main(){
//Fibonacci series. 0,1,1,2,3,5,8,13,21,34,55 continue........
int n;
printf("enter n\n");
scanf("%d",&n);
printf("the %dth term of fibonacci series is:%d\n",n,fibonacci(n));
return 0;
}