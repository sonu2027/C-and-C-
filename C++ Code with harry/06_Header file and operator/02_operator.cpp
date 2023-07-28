#include <iostream>
using namespace std;
int main()
{
    cout << "Operators in c++:" << endl;

    /*
    Following are the operator in c++
    1.Arithmetic operator
    eg. +, -, *, /, %, ++, --
    */

    int a = 5, b = 4;
    cout << "Arithmetic operator" << endl;
    cout << "The value of a+b is:" << a + b << endl;
    cout << "The value of a-b is:" << a - b << endl;
    cout << "The value of a*b is:" << a * b << endl;
    cout << "The value of a/b is:" << a / b << endl;
    cout << "The value of a%b is:" << a % b << endl;
    cout << "The value of a++ is:" << a++ << endl;
    cout << "The value of a-- is:" << a-- << endl;
    cout << "The value of ++a is:" << ++a << endl;
    cout << "The value of --a is:" << --a << endl;
    cout << endl;

    /*
    2.Assignment operator: used to assign valur to variable
    eg. int a=5;
        int b=4;
        char c='a';
    */

    /*
    3.Comparison operator:
    eg. ==, !=, <, >, <=, >=
    */
    cout << "Comparison operator" << endl;
    cout << "The value of a==b is " << (a == b) << endl;
    cout << "The value of a!=b is " << (a != b) << endl;
    cout << "The value of a>b is " << (a > b) << endl;
    cout << "The value of a<b is " << (a < b) << endl;
    cout << "The value of a<=b is " << (a <= b) << endl;
    cout << "The value of a>=b is " << (a >= b) << endl;
    cout << endl;

    /*
    4.Logical operator
    eg. && (Logical and operator)
        || (Logical or operator)
        ! (Logical not operator)
    */
    cout << "Logical operator" << endl;
    cout << "The value of (a==b && a<=b) is " << ((a == b) && (a <= b)) << endl;
    cout << "The value of (a==b || a<=b) is " << ((a == b) || (a >= b)) << endl;
    cout << "The value of (!(a==b)) is " << (!(a == b)) << endl;
    return 0;
}
