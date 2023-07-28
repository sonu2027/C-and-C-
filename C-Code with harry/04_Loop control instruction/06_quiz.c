#include<stdio.h>
int main()
{
    //int i=0 -this is also can be done but here we do some different.
    int n;
    printf("enter n\n");
    scanf("%d", &n);
    for(int i=n; i>0; i--){
        printf("%d\n", i);
        }
      return 0;
}