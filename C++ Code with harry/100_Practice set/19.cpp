/*5. Write a program to print the value of a variable i by using the "pointer to
pointer" type of variable.*/
#include<iostream>
using namespace std;
int main(){
    int i=3;
    int *ptr=&i;
    int **pptr=&ptr;
    cout<<**pptr;
    return 0;
}