/*Quick Quiz: Write a program to print natural numbers from 10 to 20 when the initial
loop counter i is initialized to 0.
The loop counter need not be int, it can be a float as well.
*/
#include<stdio.h>
int main()
{
    float i=0;
    scanf("%f", &i);
    while(i<=20){
        if(i>=10){
          printf("%f\n", i);  
        }
        i++;
    }
    return 0;
}