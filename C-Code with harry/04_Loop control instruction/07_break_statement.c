#include<stdio.h>
int main(){
int n=1;
for(int i=0;i<100;i++){
    printf("%d\n",n);
    n++;
    if(n==50)
    break;
}
return 0;
}