#include<stdio.h>
#include<stdlib.h>
int main(){
int *ptr;
// size of operator
// printf("the size of integer on my computer is %d\n",sizeof(int));
// printf("the size of character on my computer is %d\n",sizeof(char));
// printf("the size of float on my computer is %d\n",sizeof(float));
// printf("the size of double on my computer is %d\n",sizeof(double));
ptr=(int *)malloc(6*sizeof(int));
for(int i=0;i<6;i++){
    printf("enter the value of %d element\n",i+1);
    scanf("%d",&ptr[i]);
}
for(int i=0;i<6;i++){
    printf("the value of %d element is %d\n",i+1,ptr[i]);
  
}
return 0;
}