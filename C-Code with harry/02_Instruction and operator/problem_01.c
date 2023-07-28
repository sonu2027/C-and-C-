/*Q1. Which of the following is invalid in c?

1. int a; b=a; ---->invalid

2. int v=3^3; ----> valid but not print 27

3. char dt= '21 Dec 2020' ---->we should keep only one character
 in ''(single quote)*/
#include <stdio.h>
#include <math.h>
int main()
{
    int a;
    a = pow(4, 3);
    printf("%d\n", a);
    return 0;
}
