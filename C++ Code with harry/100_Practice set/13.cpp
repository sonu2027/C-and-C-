/*4. Write a program using recursion to calculate the nth element of the Fibonacci
series.*/
#include<iostream>
using namespace std;
int fibo(int term){
    if(term==1)
    return 0;
    else if(term==1 || term==2)
    return 1;
    return fibo(term-1)+fibo(term-2);
}
int main(){
    //Fibonacci series: 0,1,1,2,3,5,8,13,21 etc
    int term;
    cout<<"Enter the no of term of fibonacci series"<<endl;
    cin>>term;
    cout<<"The "<<term<<" term of a fibonacci series will be "<<fibo(term)<<endl;
    return 0;
}