#include<stdio.h>
int main(){
FILE *fptr;
int num;
fptr=fopen("read.txt","r");
fscanf(fptr,"%d",&num);
printf("the value of num is %d\n",num);
fscanf(fptr,"%d",&num);
printf("the value of num is %d\n",num);
fscanf(fptr,"%d",&num);
printf("the value of num is %d\n",num);
fscanf(fptr,"%d",&num);
fclose(fptr);
return 0;
}