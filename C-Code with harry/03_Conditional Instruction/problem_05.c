/*5. Write a program to determine whether a character entered by the user is
lowercase or not.
*/
#include<stdio.h>
int main(){
char ch;
printf("enter character\n");
scanf("%c",&ch);
if(ch>='a' && ch<='z')
printf("character is lowercase\n");
else if(ch>='A' && ch<='Z')
printf("character is uppercase\n");
else{
    printf("character is not matching\n");
}
return 0;
}