#include<iostream>
using namespace std;
int main()
{
    float x=199;
    float &y=x;
    cout<<x<<endl; 
    cout<<y<<endl;
    y++;
    cout<<y<<endl;
    cout<<x;
    return 0;
}
