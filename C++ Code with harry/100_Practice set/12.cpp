/*
1. Write a program to print the address of a variable. Use this address to get the
value of this variable.
*/
#include<iostream>
using namespace std;
int main(){
    int n=8;
    cout<<&n<<endl;
    cout<<*(&n);
    return 0;
}