/*Q1. Write a c program to calculate the area of a rectangle:
b) using inputs supplied by the user*/
//Method 1.
#include <stdio.h>
int main()
{
    int length, breadth;
    printf("enter the length and breadth of rectangle\n");
    scanf("%d%d", &length, &breadth);
    printf("area of rectangle is=%d\n", length * breadth);
    return 0;
}
//Method 2.
/*#include <stdio.h>
int main()
{
    printf("enter the length of rectangle\n");
    scanf("%d", &length);
    printf("enter the breadth of rectangle\n");
    scanf("%d", &breadth);
    printf("area of rectangle is=%d\n", length * breadth);
    return 0;
    }*/
    