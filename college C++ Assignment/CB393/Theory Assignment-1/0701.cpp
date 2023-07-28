#include<stdio.h>
void X(int &A, int &B)
{
A = A + B;
B = A - B;
A = A - B;
}
int main()
{
int a = 4, b = 18;
X(a, b);
printf("\na = %d", a);
printf("\nb = %d", b);
}