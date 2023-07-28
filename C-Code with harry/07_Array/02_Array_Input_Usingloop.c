#include<stdio.h>
int main(){
    int marks[4];
    for(int i=0;i<4;i++){
        printf("enter the marks[%d]\n",i+1);
        scanf("%d",&marks[i]) ;     
    }
    for(int i=0;i<4;i++){
        printf("the marks of marks[%d] is %d\n",i+1,marks[i]);
        
    }
    return 0;
}
