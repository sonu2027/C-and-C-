/*2. Write a program to find out whether a student is pass or fail; if it requires a
total of 40% and at least 33% in each subject to pass. Assume 3 subjects and
take marks as input from the user.*/
#include<iostream>
using namespace std;
int main(){
int p,c,m;
cout<<"Enter you physics marks"<<endl;
cin>>p;
cout<<"Enter you chemistry marks"<<endl;
cin>>c;
cout<<"Enter you mathematics marks"<<endl;
cin>>m;
if(((p+c+m)/3>=40) && (p>=33) && (c>=33) && (m>=33)){
    cout<<"You are pass"<<endl;
}
else{
    cout<<"You are fail"<<endl;
}
return 0;
}