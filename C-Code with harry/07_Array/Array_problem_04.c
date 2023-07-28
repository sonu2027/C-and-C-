/*
4. Repeat problem 3 for a general input provided by the user using scanf()
*/
#include <stdio.h>
int main()
{
    int arr[10], *ptr = arr, n;
    printf("enter n\n");
    scanf("%d", &n);
    for (int i = 0; i < 10; i++)
    {
        *ptr = (i + 1) * n;
        ptr++;
        printf("%d*%d=%d\n", n, (i + 1), arr[i]);
    }
    return 0;
}