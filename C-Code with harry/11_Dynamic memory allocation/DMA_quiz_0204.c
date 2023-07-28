/*Quick Quiz: Write a program to create an array of size n using calloc() where n is an
integer entered by the user.
*/
#include<stdio.h>
#include<stdlib.h>
int main(){
int *ptr;
int n;
printf("how many integer do you want to enter\n");
scanf("%d",&n);
ptr=(int *)calloc(n,sizeof(int));
for(int i=0;i<n;i++){
    printf("enter the value of %d element\n",i+1);
    scanf("%d",&ptr[i]);
}
for(int i=0;i<n;i++){
    printf("the value of %d element is %d\n",i+1,ptr[i]);
  
}
return 0;
}