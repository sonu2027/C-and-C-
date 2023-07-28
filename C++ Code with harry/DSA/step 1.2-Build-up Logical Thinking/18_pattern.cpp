/*      Algorithm
1.Define nested loop
2.increse 2nd loop by one and one
3.

*/
#include <iostream>
using namespace std;
int main()
{
    int row, i, j, k, l;
    cout << "Enter row" << endl;
    cin >> row;
    int execute = 1;
    for (int i = 0; i < row; i++)
    {
        char ch = 'A';
        for (int l = 0; l < row; l++)
        {
            ch++;
        }
        for (int j = 0; j < execute; j++)
        {
            ch--;
        }
        execute++;
        for (int k = i; k >= 0; k--)
        {
            cout << ch;
            ch++;
        }
        cout << endl;
    }

    return 0;
}