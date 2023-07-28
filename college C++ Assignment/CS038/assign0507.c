 #include <stdio.h>
  #define ROW 10
  #define COL 10

  int main() {
      /*
      Problem statement:We can find the all sadle point of a matrix.
      */
        int i, j, k, n, min, max, matrix[ROW][COL], pos[2][2];

        /* get the order of the matrix from the user */
        printf("Enter the order of the matrix:");
        scanf("%d", &n);

        /* get the entries for the input matrix from the user  */
        printf("Enter your entries for the input matrix:\n");
        for (i = 0; i < n; i++) {
                for (j = 0; j < n; j++) {
                        scanf("%d", &matrix[i][j]);
                }
        }

        /* find the saddle points in the given matrix */
        for (i = 0; i < n; i++) {
                min = matrix[i][0];
                for (j = 0; j < n; j++) {
                        if (min >= matrix[i][j]) {
                                min = matrix[i][j];
                                pos[0][0] = i;
                                pos[0][1] = j;
                        }
                }

                j = pos[0][1];
                max = matrix[0][j];
                for (k = 0; k < n; k++) {
                        if (max <= matrix[k][j]) {
                                max = matrix[i][j];
                                pos[1][0] = k;
                                pos[1][1] = j;
                        }
                }

                /* saddle point - minimum of a row and maximum of the column */
                if (min == max) {
                        if (pos[0][0] == pos[1][0] &&
                                pos[0][1] == pos[1][1]) {
                                printf("Saddle point (%d, %d) : %d\n",
                                                pos[0][0], pos[0][1], max);
                        }
                }
        }
        return 0;
  }
  /*
  Output:
  Enter the order of the matrix:3
Enter your entries for the input matrix:
3
4
5
2
1
5
7
9
5
Saddle point (2, 2) : 5
  */