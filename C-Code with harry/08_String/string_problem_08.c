/*8. Write a program to count the occurrence of a given character
 in a string.*/
#include<stdio.h>
int occurances(char *strr,char x);
int main(){
    char str[]="sonumandal";
    int n=occurances(str,'n');
    printf("occurances of n is:%d\n",n);
    return 0;
}
int occurances(char *strr,char x){
    int count=0;
   // char *ptr;
    while(*strr!='\0'){
        if(*strr==x){
        count++;
        }
        strr++;
    }
    return count;
}