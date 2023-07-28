//Quick Quiz: Create a 2-d array by taking input from the user. Write a display
//function to print the content of this 2-d array on the screen.
#include<stdio.h>
void display(int m,int n);
int main(){
    int nstdt,nsub;
    printf("enter the value of nstdt\n");
    scanf("%d",&nstdt);
    printf("enter the value of nsub\n");
    scanf("%d",&nsub);
    display(nstdt,nsub);
    return 0;
}
void display(int m,int n){
    int marks[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("enter the marks of student %d in sub %d\n",i+1,j+1);
            scanf("%d",&marks[i][j]);
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("the marks of student %d in sub %d is:%d\n",i+1,j+1,marks[i][j]);
            
        }
    }
}

