#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    int execute=n;
    int print=1;


    for (int i = 0; i < n; i++)
    {
        for (int k = 1; k < execute; k++)
        {
            cout<<" ";
        }
        for (int j= 0; j < print; j++)
        {
            cout<<"*";
        }
        cout<<endl;
        print+=2;
        execute-=1;
    }
    

    print-=2;//p=5 & e=0
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < execute; k++)
        {
            cout<<" ";
        }
        for (int j= 0; j < print; j++)
        {
            cout<<"*";
        }
        cout<<endl;
        execute+=1;
        print-=2;
    }


    return 0;
}