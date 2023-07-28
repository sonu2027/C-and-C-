/*9. Create a three-dimensional array and print the address of its elements in
increasing order.*/
#include <stdio.h>
int main()
{
    int arr[1][2][3];
    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int m = 0; m < 3; m++)
            {
                printf("enter arr[%d][%d][%d]\n", i + 1, j + 1, m + 1);
                scanf("%d", &arr[i][j][m]);
            }
        }
    }
    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int m = 0; m < 3; m++)
            {
                printf("%d\n", &arr[i][j][m]);
            }
        }
    }

    return 0;
}
