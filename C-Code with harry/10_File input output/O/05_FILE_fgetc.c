#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("fgetcdemo.txt", "r");
    printf("the value of fgetdemo.txt is %c\n", fgetc(ptr));
    printf("the value of fgetdemo.txt is %c\n", fgetc(ptr));
    printf("the value of fgetdemo.txt is %c\n", fgetc(ptr));
    printf("the value of fgetdemo.txt is %c\n", fgetc(ptr));
    printf("the value of fgetdemo.txt is %c\n", fgetc(ptr));
    printf("the value of fgetdemo.txt is %c\n", fgetc(ptr));
    printf("the value of fgetdemo.txt is %c\n", fgetc(ptr));
    printf("the value of fgetdemo.txt is %c\n", fgetc(ptr));
    printf("the value of fgetdemo.txt is %c\n", fgetc(ptr));
    printf("the value of fgetdemo.txt is %c\n", fgetc(ptr));
    printf("the value of fgetdemo.txt is %c\n", fgetc(ptr));
    printf("the value of fgetdemo.txt is %c\n", fgetc(ptr));
    printf("the value of fgetdemo.txt is %c\n", fgetc(ptr));
    printf("the value of fgetdemo.txt is %c\n", fgetc(ptr));
    printf("the value of fgetdemo.txt is %c\n", fgetc(ptr));
    printf("the value of fgetdemo.txt is %c\n", fgetc(ptr));
    printf("the value of fgetdemo.txt is %c\n", fgetc(ptr));
    printf("the value of fgetdemo.txt is %c\n", fgetc(ptr));
    fclose(ptr);
    return 0;
}