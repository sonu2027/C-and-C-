#include<alloc.h>
void main()
{
int a[3][4] = {
1, 2, 3, 4,
5, 6, 7, 8,
9, 1, 0, 5
};
show(a, 3, 4);
}
void show(int (*q)[4], int row, int col)
{
int i, j;
int *p;
for(i = 0; i < row; i++)
{
p = q + i;
for(j = 0; j < col; j++)
printf(“%d”, *(p + j));
printf(“\n”);
}
printf(“\n”);
}