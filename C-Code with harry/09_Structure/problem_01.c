/*10. Create a two-dimensional vector using structures in C.
Then make a function to return sum of two vectors
*/
#include<stdio.h>
#include<string.h>
struct vector{
    int x;
    int y;
};
void calsum(struct vector v1,struct vector v2,struct vector sum){
    sum.x=v1.x+v2.x;
    sum.y=v1.y+v2.y;
    printf("x component of sum is %d\n",sum.x);
    printf("y component of sum is %d\n",sum.y);
}
int main(){
    struct vector v1={5,8};
    struct vector v2={3,7};
    struct vector sum={0};
    calsum(v1,v2,sum);
return 0;
}