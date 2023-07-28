#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your age"<<endl;
    cin>>age;
    if(age<=15){
        cout<<"You are in class 10th or below right now"<<endl;
    }
    else if(age<=17){
        cout<<"You are in class 12th or below right now"<<endl;
    }
    else if(age<=21){
        cout<<"You are in under graduate or below right now"<<endl;
    }
    else{
        cout<<"You are passout or be in under graduate right now"<<endl;
    }
    return 0;
}
