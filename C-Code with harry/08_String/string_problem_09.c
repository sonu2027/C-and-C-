/*8. Write a program to count the occurrence of a given character
 in a string.*/
#include<stdio.h>
int occurances(char *strr,char x);
int main(){
    char str[]="sonnnumandal";
    occurances(str,'n');
    return 0;
}
int occurances(char *strr,char x){
    while(*strr!='\0'){
        if(*strr==x){
        printf("yess\n");
        break;
        }
        strr++;
    }
    while(*strr!='\0'){
        if(*strr!=x){
        printf("\n");
        break;
        }
        strr++;
    }
}