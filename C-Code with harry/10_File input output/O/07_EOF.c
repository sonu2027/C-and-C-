#include<stdio.h>
int main(){
FILE *ptr;
char c;
ptr=fopen("fgetcdemo.txt","r");
c=fgetc(ptr);
while(c!=EOF){
    printf("%c\n",c);
    c=fgetc(ptr);

}
return 0;
}