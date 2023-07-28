/*1. Write a program to print the multiplication table of a given number n.*/
#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter n"<<endl;
cin>>n;
cout<<endl;
for (int i = 1; i < 11; i++)
{
    cout<<n<<"*"<<i<<"="<<n*i<<endl;
}

return 0;
}