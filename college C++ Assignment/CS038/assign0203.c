#include<stdio.h>
int main()
{
    int year;
    printf("enter the year you want to check leap year or not\n");
    scanf("%d", &year);
    if(year%4==0){
        printf("%d is a leap year\n", year);
    }
    else{
        printf("%d is not a leap year\n", year);
    }
 return 0;
}
