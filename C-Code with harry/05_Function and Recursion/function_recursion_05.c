#include<stdio.h>
int fact(int n);
int main(){
    int n,m;
    printf("enter n\n");
    scanf("%d",&n);
    printf("%d",fact(n));
    return 0;
}
int fact(int n){
    if(n==1 ||n==0)
    return 1;
    else
        return fact(n-1)*n;
}