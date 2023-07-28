/*5. Write a program to sum the first ten natural numbers using a while loop.
6. Write a program to implement program 5 using for and do-while loop.
*/
//using do while loop

#include<stdio.h>
int main(){
    int n=1,temp=0;
do{
    temp=temp+n;
    n++;
}while(n<=10);
printf("%d",temp);
return 0;
}
