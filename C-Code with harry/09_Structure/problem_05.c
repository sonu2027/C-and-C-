/*14. Write a program with a structure representing a Complex number.
(use arrow operators)
*/
#include<stdio.h>
#include<string.h>
struct complex{
    int real;
    int img;
};
int main(){
    struct complex number1={1,8};
    struct complex *ptr=&number1;
    printf("real part=%d\n",ptr->real);
    printf("imaginary part=%d\n",ptr->img);
return 0;
}