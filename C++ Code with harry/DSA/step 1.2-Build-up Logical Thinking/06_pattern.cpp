#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    int print=n;
    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i < print; i++)
        {
            cout<<i+1;
        }
        cout<<endl;
        print--;
    }
    
    return 0;
}