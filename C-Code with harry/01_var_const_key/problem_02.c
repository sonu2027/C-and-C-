/*Q2. Calculate the area of a circle and modify the same program to 
calculate the volume of a cylinder given its radius and height.*/
#include<stdio.h>
#include<math.h>
int main()
{
    int radius;
    float pi=3.14;
    printf("enter the radius of a circle\n");
    scanf("%d",&radius);
    int r=pow(radius,2);
    printf("area of a circle is=%f\n",r*pi);
    int height;
     printf("enter the value of height\n");
     scanf("%d",&height);
      printf("volume of cylinder is=%f\n",height*r*pi);
    return 0;
}