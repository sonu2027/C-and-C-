/*5. Write a program containing a function that reverses the array passed to it.
*/
#include<stdio.h>
void reverse(int *change,int n);
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    reverse(arr,9);
    return 0;
}
void reverse(int *change,int n){
    for(int i=n;i>=0;i--){
    printf("%u  ",*(change+i));
    }
}