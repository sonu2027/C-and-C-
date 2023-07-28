/*3. Write a program to create an array of 10 integers and store a multiplication
table of 5 in it.*/
#include<iostream>
using namespace std;
int main(){
    int arr[10],n;
    cout<<"Enter n"<<endl;
    cin>>n;
    for(int i=0;i<10;i++){
        arr[i]=n*(i+1);
    }
    for(int i=0;i<10;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}