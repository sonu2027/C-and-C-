/*7. Write a program to decrypt the string encrypted using the encrypt function in
problem 6.*/
#include<stdio.h>
void decrypt(char *strr);
int main(){
    char str[]="ibsbnj!nbovt";
    decrypt(str);
    printf("decrypt string is:%s\n",str);
    return 0;
}
void decrypt(char *strr){
    while(*strr!='\0'){
        *strr=*strr-1;
        strr++;
    }
}