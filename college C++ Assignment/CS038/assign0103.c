#include<stdio.h>
int main()
{
 /* Problem statement:We can find the perimeter and area of any circle
                      by enter the value of r(Radius) as input */
    
    float r;
    float pi=3.14;
    printf("Enter the value of r\n");
    scanf("%f", &r);
    printf("perimeter of circle is=%0.3f\n",2*pi*r);
    printf("Area of circle is=%0.2f\n", pi*r*r);
     return 0;
}
