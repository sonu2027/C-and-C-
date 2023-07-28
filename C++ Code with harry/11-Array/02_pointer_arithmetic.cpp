#include<iostream>
using namespace std;
int main(){
int arr[]={1,2,34,5,6,7,18,90,99,78};
int *ptr=arr;
cout<<ptr<<endl;    
cout<<*ptr<<endl<<endl;

ptr++;
cout<<ptr<<endl;
cout<<*ptr<<endl<<endl;

ptr+=2;
cout<<ptr<<endl;
cout<<*ptr<<endl<<endl;

cout<<*(ptr+2)<<endl;
cout<<*(ptr+3)<<endl;
cout<<*(++ptr)<<endl<<endl;
return 0;
}