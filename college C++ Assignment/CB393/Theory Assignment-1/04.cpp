#include <iostream>
using namespace std;
int main()
{
    // int n=4294967295;
    unsigned char ch=23;
    char chh=255;
    cout << "* Size of character is " << sizeof(char) << " byte." << endl;
    cout << "* Size of unsigned char is " << sizeof(unsigned char) << " byte." << endl;
    cout << "* Size of short is " << sizeof(short) << " byte." << endl;
    cout << "* Size of int is " << sizeof(int) << " byte" << endl;
    cout << "* Size of unsigned int is " << sizeof(unsigned int) << " byte." << endl;
    cout << "* Size of unsigned long is " << sizeof(unsigned long) << " byte." << endl;
    cout << "* Size of float is " << sizeof(float) << " byte." << endl;
    cout<<int(ch)<<endl;
    cout<<chh;
    return 0;
}