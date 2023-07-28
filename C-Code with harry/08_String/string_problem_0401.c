#include<stdio.h>
void slice(char *Str,int x,int y);
int main(){
char str[]="sonumandal";
slice(str,2,6);
printf("%s",str);
return 0;
}
void slice(char *strr,int x,int y){
    int i=0;
    while((i+x)<y){
        strr[i]=strr[i+x];
        i++;
    }
    strr[i]='\0';
}