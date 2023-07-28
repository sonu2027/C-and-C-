#include <stdio.h>
int main()
{
    int n,p,r,sum=0,rn=0,m=10000,ltd=0;
    printf("Input a 5 digits integer\n");
    scanf("%d",&n);
    p=n;
    r=n%10;
    rn=rn+m*r;
    sum=sum+r;
    ltd=ltd+r;
    m=m/10;
    n=n/10;
    r=n%10;
    rn=rn+m*r;
    ltd=ltd+r;
    sum=sum+r;
    m=m/10;
    n=n/10;
    r=n%10;
    rn=rn+m*r;
    sum=sum+r;
    m=m/10;
    n=n/10;
    r=n%10;
    rn=rn+m*r;
    sum=sum+r;
    m=m/10;
    n=n/10;
    r=n%10;
    rn=rn+m*r;
    sum=sum+r;
    printf("\nSum of the digits in %d is %d\n",p,sum);
    printf("\nSum of the last 2 digits in %d is %d\n",p,ltd);
    printf("Revere of %d is %d\n",p,rn);
    return 0;
}