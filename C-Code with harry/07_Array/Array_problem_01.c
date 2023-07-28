/*
1. Create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2)
points to the third element where ptr is a pointer pointing to the first element of
the array.
*/
#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int *ptr;
    ptr=arr;
    ptr=ptr+2;
    if(ptr=&arr[2])
    printf("%d\n",*ptr);
    else
    printf("not poingting to the same address\n");
    return 0;
}