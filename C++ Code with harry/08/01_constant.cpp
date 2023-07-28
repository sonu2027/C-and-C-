#include<iostream>
using namespace std;
int main()
{
    //We can do
    float pi=3.14;
    cout<<"The value of pi is:"<<pi;
    pi=3.15;
    cout<<"The value of pi is:"<<pi;

    //We can't do
    const float e=6.6;
    cout<<"The value of pi is:"<<e;
    //e=6.7; Remove the comment from e for better understanding
    cout<<"The value of pi is:"<<e;
    return 0;
}
