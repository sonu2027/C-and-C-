//swap two numbers with the help of pointers
#include<stdio.h>
int swap(int *x,int *y);
int main(){
    int m=6,n=10;
    swap(&m,&n);
    printf("%d and %d\n",m,n);
    return 0;
}
int swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}