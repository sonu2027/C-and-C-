#include <stdio.h>
void reverse(int *ptr, int n)
{
    int j = 9;
    int temp;
    for (int i = 0; i < n; i++)
    {
        temp = *(ptr + i);
        *(ptr + i) = *(ptr + j);
        *(ptr + j) = temp;
        j--;
    }
}
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    reverse(arr, 5);
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", arr[i]);
    }
    return 0;
}