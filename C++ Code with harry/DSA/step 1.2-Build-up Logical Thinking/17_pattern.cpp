#include<iostream>
using namespace std;                           //      **A
int main(){                                    //      *AAA
    int row,i,j,k,execute=1;                             //      AAAAA
    cout<<"Enter row"<<endl;
    cin>>row;
    for (int i = row; i >0 ; i--)
    {
        char ch='A';
        for (int j = 1; j <i; j++)
        {
            cout<<" ";
        }
        for (int k =0; k<execute ; k++)
        {
            cout<<ch;
            ch++;
        }
        ch-=2;
        for (int l = 1; l < execute; l++)
        {
            cout<<ch;
            ch--;
        }
        
        execute++;
        cout<<endl;
    }
    
    return 0;
}