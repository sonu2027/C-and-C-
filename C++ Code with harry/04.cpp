#include<iostream>
using namespace std;
int glo=16;
void sum(){
    int a=100;
    cout<<glo;
}
int main(){
    int glo=99;
    int a=4;
    int b=7;
    float pi=4.9;
    char c='a';
    bool d=false;
    // cout<<"Hello world!\nThe value of a is "<<a<<".\nThe value of b is "<<b;
    // cout<<"\nThe value of pi is "<<pi<<".\nThe value of d is "<<d;
    sum();
    cout<<glo<<d;
    return 0;
}