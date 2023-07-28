/*
Quick Quiz: Write a program with three functions,
1. Good morning function which prints "Good Morning."
2. Good afternoon function which prints "Good Afternoon."
3. Good night function, which prints "Good night."
main() should call all of these in order 1 - 2 - 3.
             */
#include<stdio.h>
void goodmorning();//function prototype
void goodafternoon();//function prototype
void goodnight();//function prototype
int main()
{
    printf("display function initializing\n");
    goodmorning();//function call
    goodafternoon();//function call
    goodnight();//function call
    printf("display function complete its work\n");
    return 0;
}
//function defination
void goodmorning(){
    printf("hello! good morning\n");
}
void goodafternoon(){
    printf("hello! good afternoon\n");
}
void goodnight(){
    printf("hello! good night\n");
}