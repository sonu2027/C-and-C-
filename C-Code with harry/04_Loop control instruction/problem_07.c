
 //7. Write a program to calculate the sum of the numbers occurring
 // in the multiplication table of 8.(Consider 8x1 to 8x10)
 #include<stdio.h>
int main(){
    int n,sum=0;
    printf("enter the n\n");
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        sum=sum+(n*i);
    }
    printf("%d",sum);
    return 0;
}