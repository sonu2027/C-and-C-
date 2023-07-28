/*7. Write a program to calculate the sum of the numbers occurring in the
multiplication table of 8.(Consider 8x1 to 8x10)*/
#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter n"<<endl;
cin>>n;
cout<<endl;
int sum=0;
for (int i = 1; i < 11; i++)
{
    sum=sum+(n*i);
}
cout<<"The sum of multiplication table "<<n<<" is "<<sum<<endl;

return 0;
}