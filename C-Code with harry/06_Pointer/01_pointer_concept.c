#include <stdio.h>
int main()
{
    int m = 8;
    int *n = &m;
    
    //For concept clearing
    printf("%u\n", &m);    //&m=address of operator
    printf("%u\n", &n);    //&n=address of operator

    printf("%d\n", *(&m)); //*(&m)=value of address
    printf("%u\n", *(&n)); //*(&n)=value of address

    printf("%d\n", *n);    //*n=value at address of operator

    //for verifying
    printf("%u\n",n);
    
    return 0;
}