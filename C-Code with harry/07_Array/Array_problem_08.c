/*8. Repeat problem 7 for a custom input given by the user.
*/
#include <stdio.h>
int main()
{   
    int c;
    printf("enter c\n");
    scanf("%d",&c);
    int n[c],arr[c][10];
    for(int i=0;i<c;i++){
        printf("enter c[%d]\n",i+1);
        scanf("%d",&n[i]);
    }
    int m=0,*ptr;
    ptr=&arr[0][0];
    for(int i=0;i<c;i++){
        for(int j=0;j<10;j++){
            *ptr=n[m]*(j+1);
            
            ptr++;
        }
        m++;
    }
    for(int i=0;i<c;i++){
        for(int j=0;j<10;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}