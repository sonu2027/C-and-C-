#include<stdio.h>
int main(){
       char ch;
    
      printf("enter the value of char\n");
   scanf("%c",&ch);
if(ch>'A' && ch<'Z'){
    printf("this char is upper case\n ");
}
else{
    printf("this is lowercase\n");
}
    return 0;
}