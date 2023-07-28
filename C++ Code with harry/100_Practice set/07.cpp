/*2. Write a program to print a multiplication table of 10 in reversed order*/
#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter n"<<endl;
cin>>n;
cout<<endl;
for (int i = 10; i >0; i--)
{
    cout<<n<<"*"<<i<<"="<<n*i<<endl;
}

return 0;
}