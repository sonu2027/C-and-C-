#include<stdio.h>
void printarray(int ptr[],int n){
    for(int i=0;i<n;i++){
        printf("the vaue of element %d is %d\n",i+1,ptr[i]);
    }
    ptr[3]=546;//this value will be change in main function because of call by reference
}
int main(){
    int arr[]={2,4,45,21,54,43,46};
    printarray(arr,7);
    printf("%d\n",arr[3]);
    return 0;
}