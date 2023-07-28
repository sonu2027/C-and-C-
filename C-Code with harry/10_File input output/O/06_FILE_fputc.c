#include<stdio.h>
int main(){
FILE *ptr;
ptr=fopen("fputcdemo.txt","w");
fputc('b',ptr);
fputc('a',ptr);
fputc('n',ptr);
fputc('d',ptr);
fclose(ptr);
return 0;
}