#include<stdio.h>
#include<math.h>
int term(int n);
int main(){
    int n;
    printf("enter n\n");
    scanf("%d",&n);
    printf("%dth term is: %d",n,term(n));
    return 0;
}
int term(int n){
    if(n==1 ){
        return 1;
    }
    if(n==0)
    return 0;
    else
    return term(n-1)+term(n-2);
}