/*5. Write a program to sum the first ten natural numbers using a while loop.
*/
#include<stdio.h>
int main(){
int n=1,temp=0;
while(n<=10){
    temp=temp+n;
    n++;
}
printf("%d",temp);
return 0;
}