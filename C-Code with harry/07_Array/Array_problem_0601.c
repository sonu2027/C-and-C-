/*6. Write a program containing functions that counts the number of positive
integers in an array.*/
#include <stdio.h>
int count(int arr2[], int *n2, int i2);
int main()
{
    int i1;
    printf("enter i\n");
    scanf("%d", &i1);
    int n1 = 0, arr1[i1];
    for (int j = 0; j < i1; j++)
    {
        printf("enter arr[%d]\n", j + 1);
        scanf("%d", &arr1[j]);
    }
    count(arr1, &n1, i1);
    printf("total positive integer in an array is: %d", n1);
    return 0;
}
int count(int arr2[], int *n2, int i2)
{
    for (int i = 0; i < i2; i++)
    {
        if (arr2[i] % 2 == 0)
            *n2 = *n2 + 1;
    }
    return *n2;
}