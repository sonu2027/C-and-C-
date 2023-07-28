#include<stdio.h>
int main()
{
    int num1;
    int num2;
    int num3;

    printf("enter num1\n");
    scanf("%d", &num1);
    printf("enter num2\n");
    scanf("%d", &num2);
    printf("enter num3\n");
    scanf("%d", &num3);

    if(num1>num2){
        if(num1>num3){
            printf("%d num1 is maximum of all\n", num1);
        }
        else{
            printf("%d num3 is maximum of all\n", num3);
        }
    }
    else if(num2>num3){
         if(num2>num1){
              printf("%d num2 is maximum of all\n", num2);
         }
    }
    else{
             printf("%d num3 is maximum of all\n", num3);
        }


    if(num1<num2){
        if(num1<num3){
            printf("%d num1 is minimum of all\n", num1);
        }
        else{
            printf("%d num3 is minimum of all\n", num3);
        }
    }
    else if(num2<num3){
         if(num2<num1){
             printf("%d num2 is minimum of all\n", num2);
         }
    }
    else{
             printf("%d num3 is minimum of all\n", num3);
         }
    
 return 0;
}