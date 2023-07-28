/*4. Write a program using a function that calculates the sum and average of two
numbers. Use pointers and print the values of sum and average in main().*/
#include<iostream>
using namespace std;
int sum(float *a, float *b){
    return *a+*b;
}
float avg(float *a,float *b){
    return (*a+*b)/2;
}
int main(){
    float a,b;
    cout<<"Enter a and b"<<endl;
    cin>>a>>b;
    cout<<"The sum of a and b will be "<<sum(&a,&b)<<endl;
    cout<<"The average of an and b will be "<<avg(&a,&b)<<endl;
    return 0;
}