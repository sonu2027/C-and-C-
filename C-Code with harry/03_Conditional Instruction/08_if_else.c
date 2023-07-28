#include<stdio.h>
int main()
{
    int age;
    int emergencey=0;
    emergencey=1;
    printf("enter your age\n");
    scanf("%d", &age);
    if((age<=90 && age>=18)||!emergencey==1){
          printf("you can drive\n");
    }
    else{
        printf("you cannot drive\n");
    }
    return 0;
    


}
