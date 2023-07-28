/*7. Write a program using functions to print the following pattern(first n lines):
*
***
*****                                 */
#include<iostream>
using namespace std;
void printpattern(int n){
    int execute=1;
    for(int i=1;i<=n;i++){
        for(int j=1; j<=execute;j++){
        cout<<"*";
    }
    execute+=2;
    cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    printpattern(n);
    return 0;
}