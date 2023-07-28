#include <stdio.h>

void main()
{
    /*
    Problem statement:We can find the maximum 
    and minimum number by stored number of element in an array.
                                                              */
    int arr1[100];
    int i, mx, mn, n;
	
	
       printf("\n\nFind maximum and minimum element in an array :\n");
       printf("--------------------------------------------------\n");	

       printf("Input the number of elements to be stored in the array :");
       scanf("%d",&n);
   
       printf("Input %d elements in the array :\n",n);
       for(i=0;i<n;i++)
            {
	      printf("element - %d : ",i);
	      scanf("%d",&arr1[i]);
	    }


    mx = arr1[0];
    mn = arr1[0];

    for(i=1; i<n; i++)
    {
        if(arr1[i]>mx)
        {
            mx = arr1[i];
        }


        if(arr1[i]<mn)
        {
            mn = arr1[i];
        }
    }
    printf("Maximum element is : %d\n", mx);
    printf("Minimum element is : %d\n\n", mn);
}
/*
Output:
Find maximum and minimum element in an array :
--------------------------------------------------
Input the number of elements to be stored in the array :4
Input 4 elements in the array :
element - 0 : 3652
element - 1 : 6733
element - 2 : 7864
element - 3 : -1231
Maximum element is : 7864
Minimum element is : -1231
                                          */
