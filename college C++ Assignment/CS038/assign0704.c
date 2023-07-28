#include <stdio.h>  

/*Problem statement:By this program, we can sort the given array
 in ascending order such that elements will be arranged from 
smallest to largest.*/
   
int main()  
{  
    //Initialize array   
    int arr[] = {9, 5, 7, 1, 8};   
    int temp = 0;  
      
    //Calculate length of array arr  
    int length = sizeof(arr)/sizeof(arr[0]);  
      
    //Displaying elements of original array  
    printf("Elements of original array: \n");  
    for (int i = 0; i < length; i++) {   
        printf("%d ", arr[i]);   
    }    
      
    //Sort the array in ascending order  
    for (int i = 0; i < length; i++) {   
        for (int j = i+1; j < length; j++) {   
           if(arr[i] > arr[j]) {  
               temp = arr[i];  
               arr[i] = arr[j];  
               arr[j] = temp;  
           }   
        }   
    }  
      
    printf("\n");  
      
    //Displaying elements of array after sorting  
    printf("Elements of array sorted in ascending order: \n");  
    for (int i = 0; i < length; i++) {   
        printf("%d ", arr[i]);  
    }  
    return 0;  
} 
/* 
Output:-

Elements of original array: 
9 5 7 1 8 
Elements of array sorted in ascending order: 
1 5 7 8 9 


Algorithm:-
1.Start
2.Declare and initialize an array.
3.Loop through the array and select an element.
4.The inner loop will be used to compare the selected element from
 the outer loop with the rest of the elements of the array.
5.If any element is less than the selected element then swap the values.
6.Continue this process till entire array is sorted in ascending order.
7.end
                                                  */ 