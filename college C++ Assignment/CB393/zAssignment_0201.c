// check whether a number is palindrome or not
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d", &n);
    int temp = n, rev_num = 0;
    while (n != 0)
    {
        rev_num = rev_num * 10 + (n % 10);
        n = n / 10;
    }
    if (temp == rev_num)
        printf("number is palindrome\n");
    else
        printf("number is not palindrome\n");
    return 0;
}