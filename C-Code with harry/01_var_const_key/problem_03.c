/*Q3. Write a program to convert Celsius 
(Centigrade degrees temperature to Fahrenheit)*/
#include<stdio.h>
int main()
{
    int celcius;
    printf("enter the value of temp in degree celcius\n");
    scanf("%d",&celcius);
    printf("value of temp in farhenheit is=%f\n",9.0/5*celcius+32);
    return 0;
}