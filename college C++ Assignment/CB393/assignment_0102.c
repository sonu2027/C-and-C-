#include<stdio.h>
void fun(int c);
extern int i=10;
void main(){
    int count=5;
    while(count--){
        fun(count);
    }
    printf("%d\n",i);
}
void fun(int c){
    printf("%d\t",c--);
    printf("%d\n",i++);
}
