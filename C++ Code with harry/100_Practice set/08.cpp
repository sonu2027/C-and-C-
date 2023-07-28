/*5. Write a program to sum the first ten natural numbers using a while loop.*/
#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter n"<<endl;
cin>>n;
cout<<endl;
int sum=0;
for(int i=0;i<=n;i++){
    sum=sum+i;
}
cout<<"The sum of number 1 to "<<n<<" is "<<sum<<endl;
return 0;
}