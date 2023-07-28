#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter row"<<endl;
    cin>>row;
    for (int i = 1; i <= row; i++)
    {
        for (int j = i; j >= 1; j--)
        {
            if(j%2==0)
            cout<<"0";
            if(j%2==1)
            cout<<"1";
        }
        cout<<endl;
    }
    
    return 0;
}