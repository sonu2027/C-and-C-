/*2 number- a and b, are written in a file.Write a program to replace them
with their sum*/
#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("write.txt", "r");
    int a, b;
    fscanf(fptr, "%d%d", &a, &b);
    fclose(fptr);
    fptr = fopen("write.txt", "w");
    fprintf(fptr, "%d", a + b);
    fclose(fptr);
    return 0;
}