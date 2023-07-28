/*
6. Write a program to find the greatest of four numbers entered by the user.*/
#include<iostream>
using namespace std;
int main(){
int a,b,c,d;
cout<<"Enter a, b, c and d"<<endl;
cin>>a>>b>>c>>d;
cout<<endl;
//For largest
if(a>b && a>c && a>d){
    cout<<a<<" is largest of all"<<endl;
}
else if(b>a && b>c && b>d){
    cout<<b<<" is largest of all"<<endl;
}
else if(c>a && c>b && c>d){
    cout<<c<<" is largest of all"<<endl;
}
else{
    cout<<d<<" is largest of all"<<endl;
}

//For smallest
if(a<b && a<c && a<d){
    cout<<a<<" is smallest of all"<<endl;
}
else if(b<a && b<c && b<d){
    cout<<b<<" is smallest of all"<<endl;
}
else if(c<a && c<b && c<d){
    cout<<c<<" is smallest of all"<<endl;
}
else{
    cout<<d<<" is smallest of all"<<endl;
}
return 0;
}