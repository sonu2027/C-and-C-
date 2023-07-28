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
float volcyl(int r,int h){
    float pi=3.14;
    return pi*r*r*h;
}
int volcube(int a){
    return a*a*a;
}
int main(){
    cout<<"The sum of 5 and 7 is "<<sum(5,7)<<endl;
    cout<<"The sum of 5, 8 and 7 is "<<sum(5,8,7)<<endl;
    cout<<"The volume of cylinder with radius 7 cm and height 22 cm will be "<<volcyl(7,22)<<" cm "<<endl;
    cout<<"The volume of cube with lenght 7 cm will be "<<volcube(7)<<" cm "<<endl;
    return 0;
}