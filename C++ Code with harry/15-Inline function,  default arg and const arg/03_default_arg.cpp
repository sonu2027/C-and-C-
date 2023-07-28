#include<iostream>
using namespace std;
int AMOUNT(int P, int T, float R=3.5){
    //R=3.5 is a default arguments
    float SI=P*R*T/100;
    float A=P+SI;
    return A;
}
int main(){
    int P,R,T;
    cout<<"Enter principal and time "<<endl;
    cin>>P>>T;
    cout<<"The amount will be "<<AMOUNT(P,T)<<endl;
    cout<<"The amount will be for VIP person "<<AMOUNT(P,T,10)<<endl;
    return 0;
}