/*
3. Write a program to change the value of a variable to ten times its current
value. Write a function and pass the value by reference.
          */
#include<stdio.h>
int xtimes(int *x);
int main(){
    int n=10;
    xtimes(&n);
    printf("%d\n",n);
    return 0;
}
int xtimes(int *x){
    *x=(*x)*10;
    
}