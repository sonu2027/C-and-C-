#include<stdio.h>

int main()
{
    int n,fact=1;
    printf("enter n\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    printf("%d",fact);

    return 0;
}





    