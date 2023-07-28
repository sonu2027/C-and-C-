/*
Q3. Write a program to convert Celsius (Centigrade degrees temperature to
Fahrenheit)
*/
#include<iostream>
using namespace std;
int main(){
float c;
cout<<"Enter the value of centigrade: "<<endl;
cin>>c;
cout<<"The value in fahrenheit wiil be: "<<endl<<(9.0/5)*c+32;
return 0;
}