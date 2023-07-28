/*. Write your own version of strlen function from <string.h>*/
#include<stdio.h>
int strlen(char *st);
int main(){
    char str[]="sonu mandal";
    printf("%d\n",strlen(str));
    return 0;
}
int strlen(char *st){
    int len=0;
    char *ptr=st;
    while(*ptr!='\0'){
len++;
ptr++;
    }
    return len;
}