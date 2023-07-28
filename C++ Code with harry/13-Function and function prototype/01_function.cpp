#include<iostream>
using namespace std;
int sum(int a,int b){
    int c=a+b;
    return c;
}
int main(){
    int num1,num2;
    cout<<"Enter the value of num1 and num2"<<endl;
    cin>>num1>>num2;
    cout<<sum(num1,num2)<<endl;
    return 0;
}