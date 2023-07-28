#include <stdio.h>
int main()
{
    int arr[4];
    int *ptr;
    ptr = &arr[0]; // or ptr=arr are same thing
    for (int i = 0; i < 4; i++)
    {
        printf("enter the value of arr[%d]\n", i + 1);
        scanf("%d", ptr);
        ptr++;
    }
    for (int i = 0; i < 4; i++)
    {
        printf("the marks of arr[%d] is %d\n", i + 1, arr[i]);
    }
    return 0;
}