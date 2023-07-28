// 6.Write a program to find the greatest of four numbers entered
//  by the user.

#include <stdio.h>
int main()
{
    int num1, num2, num3, num4;
    printf("enter num1,num2,num3,num4\n");
    scanf("%d%d%d%d", &num1, &num2, &num3, &num4);
    if (num1 > num2 && num1 > num3 && num1 > num4)
    {
        printf("num1 is maximum of all\n");
    }
    else if (num2 > num3 && num2 > num4)
    {
        printf("num2 is maximum of all\n");
    }
    else if (num3 > num4)
    {
        printf("num3 is maximum of all\n");
    }
    else
    {
        printf("num4 is maximum of all\n");
    }
    if (num1 < num2 && num1 < num3 && num1 < num4)
    {
        printf("num1 is minimum of all\n");
    }
    else if (num2 < num3 && num2 < num4)
    {
        printf("num2 is minimum of all\n");
    }
    else if (num3 < num4)
    {
        printf("num3 is  minimum of all\n");
    }
    else
    {
        printf("num4 is  minimum of all\n");
    }
    return 0;
}