#include<iostream>
using namespace std;
const int size=10;
class ARRAY
{
    int arr[size];
    public:
	void display()
	{
		for(int i = 0; i< size; i++)
			cout<<arr[i];
	}
     friend istream & operator>>(istream & ,ARRAY &);
     friend ostream & operator<<(ostream & ,ARRAY &);
};
istream & operator>>(istream &DIN,ARRAY &A)
{
    for(int i=0;i<size;i++)
    {
        DIN>>A.arr[i];
    }
   return DIN;
}
ostream & operator<<(ostream &DOUT,ARRAY &A)
{
    for(int i=0;i<size;i++)
    {
        DOUT<<A.arr[i]<<"   ";
    }
   return DOUT;
}

int main()
{
    ARRAY a1, b1;
    cout<<"Enter the elements of the array: "<<endl;
    cin>>a1;
    cout<<"The elements of the array are: "<<endl;
    cout<<"a1= "<<a1<<endl;
    return 0;
}
