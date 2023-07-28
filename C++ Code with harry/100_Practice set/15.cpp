/*6. Write a recursive function to calculate the sum of first n natural numbers.*/
#include<iostream>
using namespace std;
int sum(int n){
    if(n==0)
    return 0;
    return n+sum(n-1);
}
int main(){
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    cout<<"The sum upto "<<n<<"th term wii be "<<sum(n)<<endl;
    return 0;
}