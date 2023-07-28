#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter row"<<endl;
    cin>>row;
    for (int i = row; i >0; i--)
    {
        char ch='A';
        for (int j = 0; j <= i; j++)
        {
            cout<<ch;
            ch++;
    }
    cout<<endl;
    }
    return 0;
}