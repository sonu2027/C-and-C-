#include<stdio.h>
void display();//function prototype
int main()
{
    printf("display function initializing\n");
    display();//function call
    display();//function call
    display();//function call
    printf("display function complete its work\n");
    return 0;
}
//function defination
void display(){
    int a;
    printf("enter value of a\n");
    scanf("%d", &a);
    printf("%d\n", 8*a);

}
