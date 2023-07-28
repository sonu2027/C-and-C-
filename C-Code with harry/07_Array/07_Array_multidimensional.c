#include<stdio.h>
int main(){
     int a,b;
     printf("enter a and b\n");
     scanf("%d%d",&a,&b);
    int marks[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("enter the marks of student[%d] in subject[%d]\n",i+1,j+1);
            scanf("%d",&marks[i][j]);
        }
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("the marks of student[%d] in subject[%d] is %d\n",i+1,j+1,marks[i][j]);
            
        }
    }
    return 0;
}