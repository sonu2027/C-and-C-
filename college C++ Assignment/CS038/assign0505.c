#include <stdio.h>
int main()
{
  /*
    Problem statement:C program to find the transpose of a matrix
    */
  int a[10][10], transpose[10][10], r, c;
  printf("Enter rows and columns: ");
  scanf("%d %d", &r, &c);

  // asssigning elements to the matrix
  printf("\nEnter matrix elements:\n");
  for (int i = 0; i < r; ++i)
    for (int j = 0; j < c; ++j)
    {
      printf("Enter element a%d%d: ", i + 1, j + 1);
      scanf("%d", &a[i][j]);
    }

  // printing the matrix a[][]
  printf("\nEntered matrix: \n");
  for (int i = 0; i < r; ++i)
    for (int j = 0; j < c; ++j)
    {
      printf("%d  ", a[i][j]);
      if (j == c - 1)
        printf("\n");
    }

  // computing the transpose
  for (int i = 0; i < r; ++i)
    for (int j = 0; j < c; ++j)
    {
      transpose[j][i] = a[i][j];
    }

  // printing the transpose
  printf("\nTranspose of the matrix:\n");
  for (int i = 0; i < c; ++i)
    for (int j = 0; j < r; ++j)
    {
      printf("%d  ", transpose[i][j]);
      if (j == r - 1)
        printf("\n");
    }
  return 0;
}
/*
Output:
Enter rows and columns: 3
2

Enter matrix elements:
Enter element a11: 45
Enter element a12: 32
Enter element a21: 67
Enter element a22: 97
Enter element a31: 31
Enter element a32: 20

Entered matrix:
45  32
67  97
31  20

Transpose of the matrix:
45  67  31
32  97  20
*/