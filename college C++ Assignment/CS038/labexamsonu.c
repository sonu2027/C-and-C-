#include<stdio.h>
void main()
{
    int num, r, sum,temp;
    int L,H;
    printf("input starting number of range: ");
    scanf("%d", &L);
    printf("input ending no of range :");
    scanf("%d",&H);
    printf("Armstrong no in range are :");
    for (num = L; num <= H; num++)
    {
        temp=num;
        sum=0;
        while (temp != 0)
        {
            r=temp%10;
            temp=temp/10;
            sum=sum+(r*r*r);
        }
        if(sum==num)
            printf("%d",num);
    }
    printf("\n");
}