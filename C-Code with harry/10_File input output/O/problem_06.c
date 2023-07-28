/*Write a program to write all the odd numbers from 1 to n in a file*/
#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("write.txt", "w");
    int n;
    printf("enter the where upto write odd no\n");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        if (i % 2 == 1)
            fprintf(fptr, "%d\t", i);
    }
    return 0;
}