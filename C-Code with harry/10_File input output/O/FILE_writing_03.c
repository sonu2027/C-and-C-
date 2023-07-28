#include<stdio.h>
int main(){
FILE *ptr;
int number=45;
ptr=fopen("generated.txt","w");
fprintf(ptr,"the no is %d\n",number);
fprintf(ptr,"thank you for using fprintf",number);
fclose(ptr);
return 0;
}