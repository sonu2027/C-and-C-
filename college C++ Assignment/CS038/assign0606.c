#include<stdio.h>
#include<string.h>

/*Problem statement:By this program we can replace a particular word
 by another word in a given string.*/

void replaceSubstring(char [],char[],char[]);

main()
{
char string[100],sub[100],new_str[100];
printf("\nEnter a string: ");
gets(string);
printf("\nEnter the substring: ");
gets(sub);
printf("\nEnter the new substring: ");
gets(new_str);
replaceSubstring(string,sub,new_str);
printf("\nThe string after replacing : %s\n",string);
}

void replaceSubstring(char string[],char sub[],char new_str[])
{
int stringLen,subLen,newLen;
int i=0,j,k;
int flag=0,start,end;
stringLen=strlen(string);
subLen=strlen(sub);
newLen=strlen(new_str);

for(i=0;i<stringLen;i++)
{
flag=0;
start=i;
for(j=0;string[i]==sub[j];j++,i++)
if(j==subLen-1)
flag=1;
end=i;
if(flag==0)
i-=j;
else
{
for(j=start;j<end;j++)
{
for(k=start;k<stringLen;k++)
string[k]=string[k+1];
stringLen--;
i--;
}

for(j=start;j<start+newLen;j++)
{
for(k=stringLen;k>=j;k--)
string[k+1]=string[k];
string[j]=new_str[j-start];
stringLen++;
i++;
}
}
}
}
/*
output:-
Enter a string: mynamesonu

Enter the substring: name

Enter the new substring: self

The string after replacing : myselfsonu

Algorithm:-
1.Input the full string (s1).
2.Input the substring from the full string (s2).
3.Input the string to be replaced with the substring (s3).
4.Find the substring from the full string and replace the new 
substring with the old substring (Find s2 from s1 and replace s1 by s3).
                                                                        */
