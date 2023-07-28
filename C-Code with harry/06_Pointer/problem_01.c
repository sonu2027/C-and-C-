/*
1. Write a program to print the address of a variable. Use this address to get the
value of this variable.
*/
#include<stdio.h>
int main(){
    int i=8;

    int *ptr;
    ptr=&i;
    printf("%u\n",&i);
    printf("%d\n",*ptr);
    return 0;
}