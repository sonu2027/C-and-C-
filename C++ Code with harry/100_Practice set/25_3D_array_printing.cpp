/*9. Create a three-dimensional array and print the address of its elements in
increasing order.*/
#include<iostream>
using namespace std;
int main(){
    int arr[2][1][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 1; i++)
        {
            for (int k= 0; k < 2; k++)
            {
                cout<<&arr[i][j][k]<<"\t";
            }
            cout<<endl;
        }
        cout<<endl;
        
    }
    
    return 0;
}