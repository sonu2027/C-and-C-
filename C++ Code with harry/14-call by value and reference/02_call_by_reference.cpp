#include<iostream>
using namespace std;
void swap(int *num1,int *num2){
    int temp=*num1;//temp=4
    *num1=*num2;//num1=5;
    *num2=temp;//num2=4
}
int main(){
    int num1=4,num2=5;
    cout<<"Before swapping the value of num1 is "<<num1<<" and the value of num2 is "<<num2<<endl<<endl;
    swap(&num1,&num2);
    cout<<"After swapping swapping the value of num1 is "<<num1<<" and the value of num2 is "<<num2;
    return 0;
}