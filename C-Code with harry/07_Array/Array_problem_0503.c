#include<stdio.h>
void reverse(int *change);
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    reverse(arr);
    return 0;
}
void reverse(int *change){
    for(int i=0;i<10;i++){
    printf("%u  ",*(change+9));
    change--;
    }
}