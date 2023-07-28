#include<stdio.h>
#include<math.h>
void printhello(int a);
int main(){
    printhello(5);
    return 0;
}
void printhello(int a){
    if(a==0){
        return;
    }
    else
    printf("hello\n");
    printhello(a-1);
}