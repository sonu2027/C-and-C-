/*10. Write a program to check whether a given number is prime or not using loops.
*/
#include <stdio.h>
int main()
{
    int n;
    printf("enter n\n");
    scanf("%d", &n);
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("not prime\n");
            break;
        }
        else if (n % i != 0 && n % i != 1)
        {
            printf("prime\n");
            break;
        }
    }
    return 0;
}