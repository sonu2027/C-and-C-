#include<stdio.h>
int main(){
    char ch,lower;
    printf("enetr ch\n");
    scanf("%c",&ch);
    if(ch>'A' &&  ch<'Z')
    
printf("%c\n",ch+32);
    
else if(ch>'a' && ch<'z')
printf("%c\n",ch-32);
    return 0;
}