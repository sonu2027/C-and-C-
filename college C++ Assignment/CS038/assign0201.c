#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number\n");
    scanf("%d", & a);
    if(a%2>0){
        printf("number is not even");
    }
    else if(a%2==0) {
        printf("number is even");
    }
    return 0;
}

