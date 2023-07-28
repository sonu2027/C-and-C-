/*Q4.Write a program to calculate simple interest for a 
set of values representing principle, no of years, and rate
 of interest.*/
 //Method 1.
#include<stdio.h>
int main()
{
    int p,r,t;
    printf("enter principal(p)\n");
    scanf("%d",&p);
    printf("enter rate(r)\n");
    scanf("%d",&r);
    printf("enter time(t)\n");
    scanf("%d",&t);
    printf("the SI of %d in %d year at %d rate is =%f\n",p,t,r,1.0/100*p*r*t);
     return 0;
}
//Method 2.
/*#include<stdio.h>
int main()
{
    int p,r,t;
    printf("enter principal(p),rate(r),time(t)\n");
    scanf("%d%d%d",&p,&r,&t);
printf("the SI of %d in %d year at %d rate is =%f\n",p,t,r,1.0/100*p*r*t);
     return 0;
     }*/


