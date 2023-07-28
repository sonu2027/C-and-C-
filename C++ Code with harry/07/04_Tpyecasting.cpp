#include<iostream>
using namespace std;
int main()
{
    float x=199.99;
    int y=5;
    cout<<x<<endl; 
    cout<<((float)x)<<endl; 
    cout<<((int)x)<<endl;
    cout<<x<<endl;
    cout<<(int(x))<<endl<<endl;

    cout<<y<<endl; 
    cout<<((int)y)<<endl; 
    cout<<((float)y)<<endl;
    cout<<(float(y))<<endl<<endl;

    int z=int(y);
    cout<<z<<endl<<endl;

    cout<<"The expression is "<<x+y<<endl;
    cout<<"The expression is "<<x+int(y)<<endl;
    cout<<"The expression is "<<x+(int)y<<endl;
    return 0;
}
