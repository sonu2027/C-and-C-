/*
15.Create an array of 5 complex numbers created in problem 5 and display them
with the help of a display function. The values must be taken as an input from
the user
*/
#include<stdio.h>
typedef struct complex{
    int real;
    int imaginary;
}comp;
void display(comp c){
    printf("%d\n",c.real);
    printf("%d\n",c.imaginary);
}
int main(){
    comp cnum[5];
    for(int i=0;i<5;i++){
        printf("enter the real value for %d cnum\n",i+1);
        scanf("%d",&cnum[i].real);

        printf("enter the real value for %d cnum\n",i+1);
        scanf("%d",&cnum[i].imaginary);
    }
    for(int i=0;i<5;i++){
        display(cnum[i]);
    }
return 0;
}