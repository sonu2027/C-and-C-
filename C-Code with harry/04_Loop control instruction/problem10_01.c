/*10. Write a program to check whether a given number is prime or not using loops.
*/
#include <stdio.h>
int main()
{
    int n, x, prime = 0;
    printf("enter the value of\n");
    scanf("%d", &n);
    for (int i = 2; i < n; i++)
    {

        if (n % i == 0)
        {

            prime = 1;
            break;
        }
    }
    if (prime == 1)
        printf("%d is not a prime no\n", n);
    else
        printf("%d is a prime no\n", n);

    return 0;
}