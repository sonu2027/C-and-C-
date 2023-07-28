#include<stdio.h>
int main(){
    int n;
printf("enter n\n");
scanf("%d",&n);
if(!(n%2==0)){
    printf("n is odd\n");
}
else{
    printf("n is even\n");
}
return 0;
}