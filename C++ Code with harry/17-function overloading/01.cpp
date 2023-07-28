#include<iostream>
using namespace std;
int sum(int a,int b){
    cout<<"using a and b "<<endl;
    return a+b;
}
int sum(int a, int b, int c){
    cout<<"using a, b and c "<<endl;
    return a+b+c;
}
int main(){
    cout<<"The sum of 5 and 7 is "<<sum(5,7)<<endl;
    cout<<"The sum of 5, 8 and 7 is "<<sum(5,8,7)<<endl;
    return 0;
}