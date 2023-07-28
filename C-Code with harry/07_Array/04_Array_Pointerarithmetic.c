//pointer arithmetic
#include<stdio.h>
int main(){
    char i='A';
    char *ptr=&i;
    printf("the value of ptr is %u\n",ptr);
    ptr++;
    printf("the value of ptr is %u\n",ptr);
    ptr++;
    printf("the value of ptr is %u\n",ptr);
    return 0;
}
