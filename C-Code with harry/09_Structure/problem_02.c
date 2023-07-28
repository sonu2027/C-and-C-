/*11. Write a function SumVector which returns the sum of two vectors passed to it.
The vectors must be two-dimensional.
*/
#include<stdio.h>
#include<string.h>
struct vector{
    int x;
    int y;
};
struct vector sumvector(struct vector v1,struct vector v2){
    struct vector result;
    result.y=v1.y+v2.y;
    result.x=v1.x+v2.x;
    return result;
}
int main(){
    struct vector v1,v2,sum;
    v1.x=8;
    v1.y=6;
    printf("x dim is %d and y dim is %d\n",v1.x,v1.y);
    v2.x=7;
    v2.y=4;
    printf("x dim is %d and y dim is %d\n",v2.x,v2.y);
    sum=sumvector(v1,v2);
    printf("x dim of result is %d and y dim of result is %d\n",sum.x,sum.y);
return 0;
}