/*2. Write a program to take a string as an input from the user using %c and %s.
Confirm that the strings are equal.*/
#include<iostream>
using namespace std;
int main(){
    char str[50];
    cout<<"Enter the string "<<endl;
    cin>>str;
    cout<<str<<endl;
    char *ptr=str;
    while(*ptr!='\0'){
        cout<<*ptr;
        ptr++;
    }
    cout<<str<<endl;

    return 0;
}