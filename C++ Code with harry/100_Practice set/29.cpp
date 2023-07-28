/*9. Write a program to check whether a given character is present in a string or
not.*/
#include<iostream>
using namespace std;
int main(){
    char str[50];
    char search;
    cout<<"Enter your string "<<endl;
    cin>>str;
    cout<<"Your string is "<<str<<endl;
    cout<<"which character you want to search in a string "<<endl;
    cin>>search;
    char *ptr=str;
    while(*ptr!='\0'){
        if(*ptr==search){
            cout<<search<<" is present in a string "<<endl;
            break;
        }
        ptr++;
    }
    return 0;
}