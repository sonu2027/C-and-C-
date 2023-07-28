#include <iostream>
using namespace std;
const int size = 10;
class complex
{
    int real, imaginary;

public:
    complex()
    {
        real = imaginary = 0;
    }
    complex(int a, int b)
    {
        real = a;
        imaginary = b;
    }
    friend void show(complex c);
    friend complex sum(complex a, complex b);
};
void show(complex c)
{
    cout << c.real << "+i" << c.imaginary << endl;
}
complex sum(complex a, complex b)
{
    complex result;
    result.real = a.real + b.real;
    result.imaginary = a.imaginary + b.imaginary;
    return result;
}
int main()
{
    complex  X(2, 6);
    complex  Y(7, 11);
    complex C;
    C = sum(X, Y);
    show(X);
    show(Y);
    show(C);
}