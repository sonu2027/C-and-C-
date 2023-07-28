/*2. Write a program to generate a multiplication table of a given number in text
format. Make sure that the file is readable and well-formatted.
*/
#include<stdio.h>
int main(){
FILE *ptr;
int num;
printf("which multable you want\n");
scanf("%d",&num);
ptr=fopen("multable.txt","w");
for(int i=1;i<=10;i++){
    fprintf(ptr,"%d x %d = %d\n",num,i,num*i);
}
fclose(ptr);
return 0;
}
