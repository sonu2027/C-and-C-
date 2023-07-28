/*
6. Try problem 3 using call by value and verify that it doesn’t change the value of
the said variable.
                   */
#include<stdio.h>
int xtimes(int x);
int main(){
    int n=10;
    xtimes(n);
    printf("%d\n",n);
    return 0;
}
int xtimes(int x){
    x=x*10;
    printf("%d\n",x);
    return x;
}