#include <stdio.h>
#include <string.h>
#define MAX 100 // Maximum string size

/*Problem statement:By this program we can find the frequencey of character 
which is given input by user,that means we will know that one character is 
how many times repeat in a string*/

int main(){
   char string[MAX];
   int i, length;
   int frequency[20];
   /* Input string from user */
   printf("enter the string:\n ");
   gets(string);
   length = strlen(string);
   /* Initialize frequency of each character to 0 */
   for(i=0; i<20; i++){
      frequency[i] = 0;
   }
   /* Find total number of occurrences of each character */
   for(i=0; i<length; i++){
      /* If the current character is lowercase alphabet */
      if(string[i]>='a' && string[i]<='z'){
         frequency[string[i] - 97]++;
      }
      else if(string[i]>='A' && string[i]<='Z'){
         frequency[string[i] - 65]++;
      }
   }
   /* Print the frequency of all characters in the string */
   printf("\nFrequency of all characters in string: \n");
   for(i=0; i<20; i++){
      /* If current character exists in given string */
      if(frequency[i] != 0){
         printf("'%c' = %d\n", (i + 97), frequency[i]);
      }
   }
   return 0;
}
/*
Output:-

enter the string:
hello world
Frequency of all characters in string:
'd' = 1
'e' = 1
'h' = 1
'l' = 3
'o' = 2
's'=1



Algorithm:-

Step 1: Define MAX size.
Step 2: Declare char and integer variables.
Step 3: Read the string from console.
Step 4: Find length of the string.
Step 5: Initialize frequency of each character to 0.
Step 6: Find total number of occurrences of each character.
for(i=0; i<length; i++)
   i. if(string[i]>='a' && string[i]<='z')
   frequency[string[i] - 97]++;
   ii. else if(string[i]>='A' && string[i]<='Z')
      frequency[string[i] - 65]++;
Step 7: Print the frequency of all characters in the string.
if(frequency[i] != 0)
   printf("'%c' = %d\n", (i + 97), frequency[i]);
                                                  */