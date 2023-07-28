#include <iostream>
using namespace std;
class stack
{
    int arr[10];
    int top = -1;
    int size = 10;

public:
    void push(int x);
    int pop();
};
void stack ::push(int x)
{
    if (top == size - 1)
    {
        cout << "overflow" << endl;
    }
    else
    {
        top++;
        arr[top] = x;
    }
}
int stack ::pop()
{
    if (top <= -1)
    {
        cout << "underflow" << endl;
    }
    else
        return arr[top--];
}
int main()
{
    stack X, Y, Z;
    X.push(30);
    Y.push(246);
    Z.push(5659);
    int item;
    item = X.pop();
    cout << "Pushed item is:" << item << endl;
    item = Y.pop();
    cout << "Pushed item is:" << item << endl;
    item = Z.pop();
    cout << "Pushed item is:" << item << endl;
    return 0;
}