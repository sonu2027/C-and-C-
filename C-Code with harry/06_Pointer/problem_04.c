/*
4. Write a program using a function that calculates the sum and average of two
numbers. Use pointers and print the values of sum and average in main().
                                     */
#include<stdio.h>
void sumavg(int a,int b,int *add,float *mean);
int main(){
    int m=10,n=22,sum;
    float avg;
    sumavg(m,n,&sum,&avg);
    printf("value of sum is %d\n",sum);
    printf("value of avg is %f\n",avg);
    return 0;
}
void sumavg(int a,int b,int *add,float *mean){
    *add=a+b;
    *mean=*add/2;
}                                    


