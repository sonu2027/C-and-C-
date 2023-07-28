/*6. Write a program to encrypt a string by adding 1 to the ASCII value of its
characters.*/
#include<stdio.h>
void encrypt(char *strr);
int main(){
    char str[]="harami manus";
    encrypt(str);
    printf("encrypt string is:%s\n",str);
    return 0;
}
void encrypt(char *strr){
    while(*strr!='\0'){
        *strr=*strr+1;
        strr++;
    }
}