#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your age"<<endl;
    cin>>age;
    switch (age)
    {
    case 18:
        cout<<"you are 18 years old"<<endl;
        break;
    case 23:
        cout<<"you are 23 years old"<<endl;
        break;
    default:
        cout<<"you haven't enter valid age"<<endl;
        break;
    }
    return 0;
}
