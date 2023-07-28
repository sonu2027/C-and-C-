/*
8. Write a program to calculate the factorial of a given number using for loop.*/
#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter n"<<endl;
cin>>n;
cout<<endl;
int fact=1;
for(int i=n; i>1;i--){
    fact=fact*i;
}
cout<<"The factorial of "<<n<<" is "<<fact<<endl;
return 0;
}