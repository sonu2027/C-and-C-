#include<stdio.h>
int square(int n);
int _square(int *x);
int main(){
    int n=4;
    square(n);
    printf("%d\n",n);
    _square(&n);
    printf("%d\n",n);
    return 0;
}
int square(int n){
    n=n*n;
    printf("%d\n",n);
}
int _square(int *x){
    *x=(*x)*(*x);
    printf("%d\n",*x);
}
