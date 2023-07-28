/*
5. Write a program to print the value of a variable i by using the "pointer to
pointer" type of variable.
                                    */
#include<stdio.h>
int main(){
    int i=8;
    int *ptr;
    ptr=&i;
    int **pptr;
    pptr=&ptr;
    printf("%d\n",&i);
    printf("%d\n",*pptr);
    printf("%d\n",**pptr);//by question we have to this only
}                                   