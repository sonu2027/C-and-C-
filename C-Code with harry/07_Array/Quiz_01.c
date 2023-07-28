/*Quick Quiz: Write a program to accept marks of five students in an array and print
them to the screen.*/
#include<stdio.h>
int main(){
int marks[5];
for(int i=0;i<5;i++){
    printf("enter marks for student %d\n",i+1);
    scanf("%d",&marks[i]);
}
for(int i=0;i<5;i++){
    printf("marks of student %d is %d\n",i+1,marks[i]);
}
return 0;
}