/*
3. Write a program to create an array of 10 integers and store a multiplication
table of 5 in it.
*/
#include <stdio.h>
int main()
{
    int arr[10];
    int *ptr;
    ptr = arr;
    for (int i = 0; i < 10; i++)
    {
        *ptr = (i + 1) * 5;
        ptr++;
        printf("5*%d=%d\n", (i + 1), arr[i]);
    }
    return 0;
}