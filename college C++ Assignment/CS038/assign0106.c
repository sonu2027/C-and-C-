#include<stdio.h>
int main(){
       int a,b,c;
       printf("enter the value of a\n");
       scanf("%d",&a);
       printf("enter the value of b\n");
       scanf("%d",&b);

c=a-b;
a=a-c;
b=a+c;
      printf("after swaping the value of a is %d\n",a);
      printf("after swaping the value of b is %d\n",b); 
    
}