#include<iostream>
using namespace std;
int main(){

int marks[4]={40,23,65,98};//4 is optional
marks[3]=67;
cout<<marks[0]<<endl;
cout<<marks[1]<<endl;
cout<<marks[2]<<endl;
cout<<marks[3]<<endl<<endl;
 
int mathmarks[4];
mathmarks[0]=7;
mathmarks[1]=9;
mathmarks[2]=6;
mathmarks[3]=1;
cout<<mathmarks[0]<<endl;
cout<<mathmarks[1]<<endl;
cout<<mathmarks[2]<<endl;
cout<<mathmarks[3]<<endl<<endl;

for(int i=0; i<4; i++){
    cout<<mathmarks[i]<<endl;
}

return 0;
}