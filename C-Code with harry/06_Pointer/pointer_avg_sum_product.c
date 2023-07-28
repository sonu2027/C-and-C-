#include<stdio.h>
int dowork(int a,int b,int *sum1,int *avg1,int *product1);
int main(){
    int a=4,b=6,sum,avg,product;
    dowork(a,b,&sum,&avg,&product);
    printf("sum=%d product=%d avg=%d\n",sum,product,avg);
    return 0;
}
int dowork(int a,int b,int *sum1,int *avg1,int *product1){
    *sum1=a+b;
    *product1=a*b;
    *avg1=(a+b)/2;
}