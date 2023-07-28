#include <stdio.h>
void fun(int c);
static int i = 5;
void main()
{
    int i = 0;
    int c = 5;
    while (c >= 0)
    {
        fun(c);
        c = c - 1;
    }
    printf("%d is local i\n", i);
}
void fun(int c)
{
    printf("%d is c in function\n", c);
    printf("%d is global i\n", i);
}
