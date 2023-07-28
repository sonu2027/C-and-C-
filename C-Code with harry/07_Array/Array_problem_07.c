/*
7. Create an array of size 3x10 containing multiplication tables of the numbers
2,7 and 9, respectively.
*/
#include <stdio.h>
int main()
{   
    int n[]={2,7,9},arr[3][10];
    int m=0,*ptr;
    ptr=&arr[0][0];
    for(int i=0;i<3;i++){
        for(int j=0;j<10;j++){
            *ptr=n[m]*(j+1);
            
            ptr++;
        }
        m++;
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<10;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}