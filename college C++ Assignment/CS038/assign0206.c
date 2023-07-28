#include <stdio.h>
int power(int x,int y)
{
    int n=1,i;
    for(i=0;i<y;++i)
    {
        n=n*x;
    }
    return n;
}
int main()
{
    int n,m,j,i=0,r,rev=0;
    printf("Enter one integer\n");
    scanf("%d",&n);
    m=n;
    while(n!=0)
    {
        n=n/10;
        i++;
    }
    n=m;
    j=1;
    while(n!=0)
    {
       r=n%10;
       n=n/10;
       rev=rev+power(10,i-j)*r;
       j++;
    }
    if(rev==m)
    {
        printf("Reverse is same\n");
    }
    else
        {
            printf("Reverse is not same\n");
        }
    printf("Number of digits in %d is %d\n",m,i);
    printf("Reverse of %d is %d\n",m,rev);
    return 0;
}