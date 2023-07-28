/*5. Write a program containing a function that reverses the array passed to it.*/
#include<iostream>
using namespace std;
void revarr(int *ptr){
    int temp;
    for(int i=0;i<=4;i++){
        temp=*(ptr+i);
        *(ptr+i)=*(ptr+9-i);
        *(ptr+9-i)=temp;
    }
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    revarr(arr);
    for (int i = 0; i < 10; i++)
    {
        cout<<arr[i]<<"\t";
    }
    return 0;
}