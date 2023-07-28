#include<stdio.h>
#include<string.h>
int main(){
    char *str1="mandal";
    char str2[50]="sonu";
    strcat(str2,str1);
    printf("%s",str2);
    return 0;
}
