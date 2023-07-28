#include<stdio.h>
#include<math.h>
int sum(int a);
int main(){
    printf("sum is: %d",sum(20));
    return 0;
}
int sum(int a){
    if(a==0){
        return 0;
    }
    else
    return sum(a-1)+a;
}