/*Q3. Write a program to check whether a number is divisible 97 or not
*/
#include <stdio.h>
int main()
{
    int a;
    printf("Enter the number\n");
    scanf("%d", &a);
    if (a % 97 == 0)
    {
        printf("number is divisible by 97");
    }
    else
    {
        printf("number is not divisible by 97");
    }
    return 0;
}
