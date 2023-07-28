/*Q3. Write a program to check whether a number is divisible 97 or not.*/#include<iostream>
using namespace std;
int main(){
int num;
cout<<"Enter num"<<endl;
cin>>num;
if(97%num==0){
    cout<<num<<" is divisible by 97"<<endl;
}
else{
    cout<<num<<" is not divisible by 97"<<endl;
}
return 0;
}