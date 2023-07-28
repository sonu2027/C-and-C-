#include <stdio.h>
// sum is a function which take input a and b as input
// and return integer as a output
int sum(int a, int b); // function prototype
int main()
{
    int c;
    c = sum(2, 5); // function call
    printf("%d", c);
    return 0;
}
// function defination
int sum(int a, int b)
{
    int result;
    result = a + b;
    return result;
}
