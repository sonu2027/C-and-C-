#include<stdio.h>
int fun(int,int);
int fun(int i1,int i2)
{
    register int c;
    c=i1+i2;
    return(c);
}
void main(){
    int a=2;
    int b=5;
    int c;
    c=fun(a,b);
    printf("%d\n",c);
}