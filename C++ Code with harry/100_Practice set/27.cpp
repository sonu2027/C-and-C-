/*3. Write your own version of strlen function from <string.h>*/
#include<iostream>
using namespace std;
int strlen(char *ptr){
    int count=0;
    while(*ptr!='\0'){
        count++;
        ptr++;
    }
    return count;
}
int main(){
    char str[50];
    cout<<"Enter your string "<<endl;
    cin>>str;
    cout<<"Your string is "<<str<<endl;
    cout<<strlen(str)<<endl;
    return 0;
}