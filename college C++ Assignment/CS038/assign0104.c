#include<stdio.h>
int main()
{
    /* Problem statement:we can find the value of temp in 
                         centigrade by enter the value of 
                         temp in fahrenheit as input. */
    float f;
    printf("Enter the value of temp in fahrenheit\n");
    scanf("%f", &f);
    printf("value of temp in centigrade is %f\n",(5*(f-32))/9);   
    return 0;
}