/*7. Create an array of size 3x10 containing multiplication tables of the numbers
2,7 and 9, respectively.*/
#include<iostream>
using namespace std;
int main(){
    int arr[3][10];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j <10; j++)
        {
            if(i==0)
            arr[i][j]=2*(j+1);
            else if(i==1)
            arr[i][j]=7*(j+1);
            else if(i==2)
            arr[i][j]=9*(j+1);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for ( int j = 0; j < 10; j++)
        {
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
    
    
    
    return 0;
}