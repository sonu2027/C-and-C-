/*3. Write a program to change the value of a variable to ten times its current
value. Write a function and pass the value by reference.*/
#include<iostream>
using namespace std;
int xtimes(int *x){
    return *x=10*(*x);
}
int main(){
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    cout<<xtimes(&n);
    return 0;
}