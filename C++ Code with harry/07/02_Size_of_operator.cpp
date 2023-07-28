#include<iostream>
using namespace std;
int c=60;
int main()
{
    float f=34.4f;
    long double l=34.4l;
    cout<<"The value of f is "<<f<<endl<<"and The value of l is "<<l<<endl;
    cout<<"The size of 34.4 is:"<<sizeof(34.4)<<endl;
    cout<<"The size of 34.4f is:"<<sizeof(34.4f)<<endl;
    cout<<"The size of 34.4F is:"<<sizeof(34.4F)<<endl;
    cout<<"The size of 34.4l is:"<<sizeof(34.4l)<<endl;
    cout<<"The size of 34.4L is:"<<sizeof(34.4L)<<endl;
    cout<<"The size of 34 is:"<<sizeof(34)<<endl;
    cout<<"The size of 'c' is:"<<sizeof('c')<<endl<<endl;

    cout<<"The size of int is:"<<sizeof(int)<<endl;
    cout<<"The size of float is:"<<sizeof(float)<<endl;
    cout<<"The size of char is:"<<sizeof(char)<<endl;
    cout<<"The size of double is:"<<sizeof(double)<<endl;
    cout<<"The size of bool is:"<<sizeof(bool)<<endl;
    cout<<"The size of long double is:"<<sizeof(long double)<<endl;
    return 0;
}
