#include <stdio.h>
void change(int a); // function prototype
int main()
{
    int b = 300;
    printf("the value of b before change is %d\n", b);
    change(b);

    printf("the value of b after change is %d\n", b);
    return 0;
}
// function defination
void change(int a)
{
    int a = 77;
}