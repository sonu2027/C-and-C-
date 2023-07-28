/*
2. Write a program having a variable i. Print the address of i. Pass this variable
to a function and print its address. Are these addresses same? Why?
*/
#include<stdio.h>
void write(int x);
int main(){
    int i=8;
    printf("%u\n",&i);
    write(i);
    return 0;
}
void write(int x){
    printf("%u\n",&x);
    
}