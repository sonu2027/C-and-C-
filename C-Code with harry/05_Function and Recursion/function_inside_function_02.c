#include<stdio.h>
void goodmorning();//function prototype
void goodafternoon();//function prototype
void goodnight();//function prototype
int main()
{
    printf("display function initializing\n");
    goodmorning();//function call
    printf("display function complete its work\n");
    return 0;
}
//function defination
void goodmorning(){
    printf("hello! good morning\n");
    goodafternoon();
}
void goodafternoon(){
    printf("hello! good afternoon\n");
    goodnight();
}
void goodnight(){
    printf("hello! good night\n");
}