#include <stdio.h>
void wrong_swap(int a, int b);
void swap(int *a, int *b);
int main()
{
    int i = 6, j = 8;
    printf("the value of i and j is before swap is %d and %d\n", i, j);
    wrong_swap(i, j); // will not work due to call by value
    printf("the value of i and j is after swap is %d and %d\n", i, j);
    swap(&i, &j); // will work due to call by reference
    printf("the value of i and j is after swap is %d and %d\n", i, j);
    return 0;
}
void wrong_swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
