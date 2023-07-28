#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n "<<endl;
    cin>>n;
    int print=n;
    for(int i=0;i<n;i++){
        for (int j = 0; j < print; j++)
        {
            cout<<"*";
        }
        cout<<endl;
        print--;
    }
    return 0;
}