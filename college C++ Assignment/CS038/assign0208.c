#include <stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float s,y,x,d;
    printf("Enter value of a b and c\n");
    scanf("%d%d%d",&a,&b,&c);
    d=b*b-4*a*c;
    if(d==0)
    {
        x=(b*-1)/(2*a);
        printf("The roots are equal and it is %f\n",x);
    }
    else if(d<0)
    {
        printf("Roots are imaginary and unequal\n");
        d=d*-1;
        s=sqrt(d)/(2*a);
        x=(b*-1)/(2*a);
        printf("First Root=%f+i*%f\n",x,s);
        printf("Second Root=%f-i*%f\n",x,s);
    }
    else
    {
        printf("Roots are real and unequal\n");
        s=sqrt(d)/(2*a);
        x=((b*-1)+sqrt(d))/(2*a);
        y=((b*-1)-sqrt(d))/(2*a);
        printf("First Root=%f",x);
        printf("Second Root=%f",y);
    }
    return 0;
}
