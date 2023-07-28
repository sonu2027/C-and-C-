#include<stdio.h>
int main(){
    int n;
printf("enter n\n");
scanf("%d",&n);
if((n%2==0)||(n%5==0)){
    printf("n is divisible by 2 and 5\n");
}
else{
    printf("n is not divisible by 2 and 5\n");
}
return 0;
}