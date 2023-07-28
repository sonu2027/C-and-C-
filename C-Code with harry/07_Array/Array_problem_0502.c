#include <stdio.h>
int reverse(int *change, int n);
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    reverse(arr, 9);
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}

int reverse(int *change, int n)
{
    int temp;
    for (int i = 0; i < 5; i++)
    {
        temp = *(change + i);
        *(change + i) = *(change + n);
        *(change + n) = temp;
        n--;
    }
}