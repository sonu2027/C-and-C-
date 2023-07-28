/*
Quick Quiz: Create a string using " " and print its content using a loop.
*/
#include<stdio.h>
int main(){
   // char str[]={'a','b','c','d','\0'}; ---- we can write also this
    char str[]="abcd";
    char *ptr=str;
    while(*ptr!='\0'){
        printf("%c",*ptr);
        ptr++;
    }
    return 0;
}