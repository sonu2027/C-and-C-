#include<iostream>
using namespace std;
int main(){
    int row;
    char ch='A';
    cout<<"Enter row"<<endl;
    cin>>row;
    for (int i = 0; i < row; i++)
    {
        for (int j = i; j >= 0; j--)
        {
            cout<<ch;
        }
        ch++;
        cout<<endl;
    }
    return 0;
}