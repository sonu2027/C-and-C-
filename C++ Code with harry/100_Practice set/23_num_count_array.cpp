/*6. Write a program containing functions that counts the number of positive
integers in an array.*/
#include<iostream>
using namespace std;
int even_no_count(int *ptr){
    int count=0;
    for (int i = 0; i < 11; i++)
    {
        if(*ptr%2==0){
            count++;
            ptr++;
        }
        else{
            ptr++;
            continue;
        }
    }
    return count;
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10,12};
    cout<<even_no_count(arr);
    return 0;
}