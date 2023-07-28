#include<stdio.h>
int main(){
    char str[30];
    printf("enter your string\n");
    scanf("%s",str);//in str there is having address of 1st element
    printf("your string is %s",str);

    return 0;
}