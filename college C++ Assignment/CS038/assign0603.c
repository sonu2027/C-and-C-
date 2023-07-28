#include <stdio.h>
#include <string.h>

/*Problem statement:By this program we can remove the duplicate character 
from string which is given input by the user.*/
 
int main()
{
    char s[1000],temp=1,c='*';  
    int  i,j,k=0,n;
 
    printf("Enter  the string : ");
    gets(s); 
    for(i=0;s[i];i++)
    {
    	if(!(s[i]==c))
    	{
    		for(j=i+1;s[j];j++)
            {
            	if(s[i]==s[j])
            	   s[j]=c;
        	
		    }
    		
		}
     	
     	
    }
 
    for(i=0;s[i];i++)
    {
     	s[i]=s[i+k];
 
     	
     	if(s[i]==c)
     	{
		  k++;
		  i--;
	    }
     	
    }
    printf("string after removing all duplicates:");
 
 	 printf("%s",s);
 	 
     
    return 0;
}
/*
output:-

Enter  the string: hello world
string after removing all duplicate:helo wrd


Algorithm:-

1)Read the entered string and save in the character array s[] using gets(s).
2) temp=1,c=”*”,k=0.

3) Replace all repeated characters with ‘*’ as follows.

a) For loop iterates through the string until the character of the string is null.

b) If the first character not equal to “*”

c) Then compare the first character with the next characters to it. 
If matched then replace the matched elements with “*”.
Repeat these b,c steps for all elements of the string.

4) Remove all ‘*’  from the string as follows.

for loop iterates through the string until s[i] becomes to null, with the
 structure for(i=0;s[i];i++).

a) initialize s[i]=s[i+k]

b) If s[i]  is matched with  ‘*’ then increase the k and decrease the index value i.

Here we are shifting the elements to left by removing ‘*’.

5) Print the string.
                                                  */