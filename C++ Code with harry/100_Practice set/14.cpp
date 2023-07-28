/*5. What will the following line produce in a C program: printf(“%d %d
%d\n”,a,++a,a++);*/
#include<iostream>
using namespace std;
int main(){
    int a=6;
    cout<<a<<endl<<++a<<endl<<a++<<endl;
    return 0;
}