#include<stdio.h>
int count(int ptr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
    if((ptr[i]>=0) && (ptr[i]%2==0)||(ptr[i]%2==1)){
        count++;
    }
    else{
        continue;
    }
    }
    return count;
}
int main(){
int arr[]={1,-7,-8,2,5,6,-10,10,0,-100,27,20};
printf("%d",count(arr,12));
return 0;
}