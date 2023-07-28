/*10. Write a program to check whether a given number is prime or not using loops.*/
#include <iostream>
using namespace std;
int main()
{
    int n,i;
    cout << "Enter n" << endl;
    cin >> n;
    int count=0;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << n << " is not a prime no" << endl;
            break;
        }
        else if(n%i!=0){
            count++;
        }
    }
    if(count==n-2){
        cout<<n<<" is a prime no"<<endl;
    }
    return 0;
}