#include <stdio.h>
int main()
{
    /*
    Problem statement:Addition of two matrices using function
    */
    int m, n, c, d, first[10][10], second[10][10], sum[10][10];
    printf("Enter the number of rows and columns of matrix\n");
    scanf("%d%d", &m, &n);
    printf("Enter the elements of first matrix\n");
    for (c = 0; c < m; c++)
        for (d = 0; d < n; d++)
            scanf("%d", &first[c][d]);
    printf("Enter the elements of second matrix\n");
    for (c = 0; c < m; c++)
        for (d = 0; d < n; d++)
            scanf("%d", &second[c][d]);
    printf("Sum of entered matrices:-\n");
    for (c = 0; c < m; c++)
    {
        for (d = 0; d < n; d++)
        {
            sum[c][d] = first[c][d] + second[c][d];
            printf("%d\t", sum[c][d]);
        }
        printf("\n");
    }
    return 0;
}
/*
Output:
Enter the number of rows and columns of matrix
2
3
Enter the elements of first matrix
2
3
4
1
5
3
Enter the elements of second matrix
3
2
4
5
2
6
Sum of entered matrices:-
5       5       8
6       7       9
*/