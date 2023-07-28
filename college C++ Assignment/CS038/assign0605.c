#include<stdio.h>

/*Problem statement:By this prpogram we can convert a given integer into string*/

main() {
   char str[20];    //create an empty string to store number
   float number;
   printf("Enter a number: ");
   scanf("%f", &number);
   sprintf(str, "%f", number);//make the number into string using sprintf function
   printf("\nYou have entered: %s", str);
}
/*
Output:
Enter a number: 46.3258
You have entered: 46.325802

Algorithm:
Step 1: Take a number from the user
Step 2: Create an empty string buffer to store result
Step 3: Use sprintf() to convert number to string
Step 4: End
                                                     */
                              
