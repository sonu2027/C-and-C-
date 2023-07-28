/*1. Write a program to read three integers from a file.*/
#include<stdio.h>
int main(){
FILE *ptr;
int a,b,c;
ptr=fopen("read.txt","r");
fscanf(ptr,"%d%d%d\n",&a,&b,&c);
fclose(ptr);
printf("%d %d %d\n",a,b,c);
return 0;
}

// #include<stdio.h>
// int main(){
// FILE *ptr;
// int a;
// ptr=fopen("read.txt","r");
// fscanf(ptr,"%d\n",&a);
// printf("%d\n",a);
// fscanf(ptr,"%d\n",&a);
// printf("%d\n",a);
// fscanf(ptr,"%d\n",&a);
// printf("%d\n",a);
// fclose(ptr);
// return 0;
// }