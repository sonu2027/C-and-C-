/*
3. Write a program to create an array of 10 integers and store a multiplication
table of 5 in it.
*/
#include<stdio.h>
int main(){
int n,arr[10];
printf("enter multiplication table\n");
scanf("%d",&n);
for(int i=0;i<=10;i++){
    arr[i]=n*(i+1);
}
for(int i=0;i<=10;i++){
    printf("%d\n",arr[i]);
}
return 0;
}