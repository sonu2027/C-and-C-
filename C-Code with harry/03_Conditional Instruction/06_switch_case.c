#include<stdio.h>
int main()
{
    int age;
    printf("enter the age between 1 to 5\n");
    scanf("%d", &age);
    switch(age){
    case 1:
    printf("you entered your age 1\n");
    break;
    
    case 2:
    printf("you entered your age 2\n");
    break;
    case 3:
    printf("you entered your age 3\n");
    break;
    case 4:
    printf("you entered your age 4\n");
    break;
    case 5:
    printf("you entered your age 5\n");
    break;
    
    default:
    printf("your age is not 1,2,3,4 and 5");
    break;
    }
    
    
    return 0;
}
