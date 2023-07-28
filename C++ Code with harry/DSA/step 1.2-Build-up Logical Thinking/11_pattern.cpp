#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n" << endl;
    cin >> n;
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j =i; j >= 1; j--)
        {
            cout << j % 2;
        }
        cout << endl;
    }
    return 0;
}