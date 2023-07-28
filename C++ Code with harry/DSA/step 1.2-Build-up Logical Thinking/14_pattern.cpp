#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter row"<<endl;
    cin>>row;
    for (int i = 1; i <=row; i++)
    {
        char ch='A';
        for (int j = i; j >=1; j--)
        {
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }
    
    return 0;
}