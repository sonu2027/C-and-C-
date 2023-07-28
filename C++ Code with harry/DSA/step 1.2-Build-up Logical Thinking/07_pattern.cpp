#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n (n should be odd) "<<endl;
    cin>>n;
    int print=n;
    int ex=1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < print; j++)
        {   
            cout<<" ";
        }
        for (int k = 0; k < ex; k++)
        {
            cout<<"*";
        }
        cout<<endl;
        ex+=2;
        print--;
    }
    
    return 0;
}