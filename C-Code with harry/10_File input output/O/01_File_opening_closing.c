#include<stdio.h>
int main(){
FILE *fptr;
fptr=fopen("read.txt","r");//for reading the file
fclose(fptr);
//ptr=fopen("r.txt","w");// for writing the file
return 0;
}