/*8. Write a program to count the occurrence of a given character in a string.*/
#include<iostream>
using namespace std;
int main(){
    char str[50];
    char unique;
    cout<<"Enter your name "<<endl;
    cin>>str;
    cout<<"Your name is "<<str<<endl;
    cout<<"which character's occurance of Your name you to know "<<endl;
    cin>>unique;
    char *ptr=str;
    int count=0;
    while(*ptr!='\0'){
        if(*ptr==unique){
            count++;
        }
        ptr++;
    }
    cout<<count;
    return 0;
}