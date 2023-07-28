/*2. Write a function to convert Celcius temperature into Fahrenheit.*/
#include<stdio.h>
float fahrenheit(int celcius){
return (9.0/5*celcius)+32;
}
int main(){
int celcius;
printf("enter c\n");
scanf("%d",&celcius);
printf("%f",fahrenheit(celcius));
return 0;
}