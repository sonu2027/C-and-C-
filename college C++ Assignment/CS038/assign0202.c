/* ye sir ka bataya hua h aur sirf gcd ka h #include <stdio.h>
int main()
{
    int n,m,x,y,r;
    printf("Enter 2 integers\n");
    scanf("%d%d",&n,&m);
    if(n>m)
    {
        x=n;
        y=m;
    }
    else
    {
        x=m;
        y=n;
    }
    do{
        r=x%y;
        x=y;
        y=r;
    }while(r!=0);
    printf("The GCD of %d and %d is %d\n",n,m,x);
    return 0;
}*/
/*#include <stdio.h>
int main() 
// ye internet se search kiye h 
{
    int n1, n2, max ,i, gcd;
    printf("Enter two positive integers for finding LCM and GCD: ");
    scanf("%d %d", &n1, &n2);

  // maximum number between n1 and n2 is stored in max
    max = (n1 > n2) ? n1 : n2;

    while (1) {
        if (max % n1 == 0 && max % n2 == 0) {
            printf("The LCM of %d and %d is %d\n.", n1, n2, max);
            break;
        }
        ++max;
    }
    for(i=1; i <= n1 && i <= n2; ++i)
    {
        // Checks if i is factor of both integers
        if(n1%i==0 && n2%i==0)
            gcd = i;
    }

    printf("G.C.D of %d and %d is %d", n1, n2, gcd);

    return 0;
}*/
//ye mera kiya hua h
#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("enter the no which gcd and lcm you want\n");
    scanf("%d%d",&a,&b);
    while(a%b!=0){
        c=a%b;
        printf("%d",c%a);

        }

    
    return 0;
}
