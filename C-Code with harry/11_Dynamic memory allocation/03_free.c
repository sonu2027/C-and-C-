#include<stdio.h>
#include <stdlib.h>
int main(){
int *ptr;
int n;
printf("enter n\n");
scanf("%d",&n);
ptr=(int *)calloc(n,sizeof(int));
for(int i=0;i<5;i++){
    printf("enter number %d\t",i+1);
    scanf("%d",&ptr[i]);
}
for(int i=0;i<5;i++){
    printf("%d\t",ptr[i]);
}
free(ptr);
ptr=(int *)calloc(3,sizeof(int));
for(int i=0;i<3;i++){
    printf("%d\t",ptr[i]);
}
return 0;
}