#include<iostream>
using namespace std;

class COMPLEX
{
    int a,b;
    public:

    void set_data(int x,int y)
    {
        a=x;
        b=y;
    }
	void show_data()
	{
		cout<<a<<"+"<<b<<"i"<<endl;
	}
     friend istream & operator>>(istream & ,COMPLEX &);
     friend ostream & operator<<(ostream & ,COMPLEX &);
    friend COMPLEX operator +(COMPLEX X,COMPLEX Y);

};
istream & operator>>(istream &DIN,COMPLEX &C)
{
        DIN>>C.a>>C.b;
   return DIN;
}

ostream & operator<<(ostream &DOUT,COMPLEX &C)
{
        DOUT<<C.a<<"+i"<<C.b;
   return DOUT;
}
COMPLEX operator +(COMPLEX X,COMPLEX Y)
{
    COMPLEX temp;
    temp.a=X.a+Y.a;
    temp.b=X.b+Y.b;
    return (temp);
}

int main()
{
    COMPLEX c1,c2 ,c3;
    cout<<"Enter the first COMPLEX NUMBER: "<<endl;
    cin>>c1;
    cout<<"The  first complex number is: "<<endl;
    cout<<"c1= "<<c1<<endl;
     cout<<"Enter the  second COMPLEX NUMBER: "<<endl;
    cin>>c2;
    cout<<"The  second complex number is: "<<endl;
    cout<<"c2= "<<c2<<endl;
    c3=c1+c2;
    cout<<"The sum of two complex number is: "<<endl;
    cout<<c3;
    return 0;
}
