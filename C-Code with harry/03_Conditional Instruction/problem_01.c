/*1. What will be the output of this program?
int a=10;
if(a=11)
 printf(“I am 11”);
else
 printf(“I am not 11”);
 
 ans- I am 11
 */
#include <stdio.h>
int main()
{
    int a = 10;
    if (a = 11)
        printf("I am 11\n");
    else
        printf("I am not 11\n");
    return 0;
}