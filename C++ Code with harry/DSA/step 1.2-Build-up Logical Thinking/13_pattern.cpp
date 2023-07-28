#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter row"<<endl;
    cin>>row;
    int i,j,print=1;
    for (int i = 0; i < row; i++)
    {
        for (int j=0; j <=i ; j++)
        {
            cout<<print<<" ";
            print++;
        }
        cout<<endl;
    }
    return 0;
}