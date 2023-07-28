#include <stdio.h>
int main()
{
    int n;
    printf("enter marks\n");
    scanf("%d", &n);
    if (n>90 && n<=100)
    {
        printf("your grade is 'A'\n");
    }
    else if(n>80 && n<=90){
        printf("your grade is 'B'\n");
    }
    else if(n>70 && n<=80){
        printf("your grade is 'C'\n");
    }
    else if(n>60 && n<=70){
        printf("your grade is 'D'\n");
    }
    else if(n<=60){
        printf("you are fail\n");
    }
    else{
        printf("your grade is not matching\n");
    }
    
    return 0;
}