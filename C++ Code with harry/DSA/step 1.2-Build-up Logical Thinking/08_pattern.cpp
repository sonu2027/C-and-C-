#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    int execute=0;
    int print=n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < execute; j++)
        {
            cout<<" ";
        }
        execute+=1; 
        for (int k = 0; k < print; k++)
        {
            cout<<"*";
        }
        cout<<endl;
        print-=2;
    }
    return 0;
}