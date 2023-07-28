#include<stdio.h>
int sum(int a,int b);
int main(){
    int i=5,j=8;
    printf("the value of i and j before change is %d and %d\n",i,j);
    printf("the sum of i and j is: %d\n",sum(5,8));
    printf("the value of i and j after change is %d and %d\n",i,j);
    return 0;
}
int sum(int a,int b){
    int c;
    c=a+b;
    a=65;
    b=54;
    return c;
}