/*: Modify the program above to check whether the file exists or not before
opening the file.*/
#include<stdio.h>
int main(){
FILE *ptr;
int num;
ptr=fopen("son.txt","r");
if(ptr==NULL)
printf("file does not exist\n");
else{
fscanf(ptr,"%d",&num);
fclose(ptr);
printf("the value of num is %d\n",num);
}
return 0;
}