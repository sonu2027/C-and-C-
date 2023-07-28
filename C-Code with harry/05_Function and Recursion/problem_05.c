/*5. What will the following line produce in a C program: printf(“%d %d
%d\n”,a,++a,a++);
*/
#include<stdio.h>
int main(){
int a=5;
printf("%d%d%d",a,++a,a++);
return 0;
}