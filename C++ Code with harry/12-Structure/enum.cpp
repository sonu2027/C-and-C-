#include <iostream>
using namespace std;
int main()
{
    enum meal
    {
        breakfast,
        lunch,
        dinner
    };
    cout << breakfast << endl;
    cout << lunch << endl;
    cout << dinner << endl
         << endl;

    int a = breakfast, b = lunch, c = dinner;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl
         << endl;

    cout << sizeof(meal) << endl;
    cout << sizeof(a) << endl;
    cout << sizeof(lunch) << endl;
    return 0;
}