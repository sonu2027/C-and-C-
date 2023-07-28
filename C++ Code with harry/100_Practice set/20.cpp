/*
1. Create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2)
points to the third element where ptr is a pointer pointing to the first element of
the array.
*/
#include<iostream>
using namespace std;
int main(){
    int arr[]={4,7,1,9,3,2,9,1,12,65};
    int *ptr=arr;
    // ptr=ptr+2;
    // cout<<*ptr;

    //both will work same
    cout<<*(ptr+2);
    return 0;
}