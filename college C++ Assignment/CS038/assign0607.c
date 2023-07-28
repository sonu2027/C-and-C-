#include <stdio.h>

/*Problem statement:By this program we can expand(String1, String2) 
that expands shorthand notation like a-z in the string String1 into
 the equivalent complete list abc ... xyz in string String2.*/

void expand(char s1[], char s2[])
{
	char c;
	int i, j;
	i = j = 0;
	while ((c = s1[i++]) != '\0')
	{
		if (s1[i] == '-' && s1[i + 1] >= c)
		{
			i++;
			while (c < s1[i])
				s2[j++] = c++;
		}
		else
			s2[j++] = c;
		s2[j] = '\0';
	}
}

void test2()
{
    char *s[] = { "a-z-", "z-a-", "-1-6-",
                  "a-ee-a", "a-R-L", "1-9-1",
                  "5-5", NULL };
    char result[100];
    int i = 0;
    
    while ( s[i] ) {
        
        /*  Expand and print the next string in our array s[]  */
        
        expand(s[i], result);
        printf("Unexpanded: %s\n", s[i]);
        printf("Expanded  : %s\n", result);
        ++i;
    }
}	

int main(void)
{
	test2();
	return 0;
}
/*
Output:-
Unexpanded: a-z-
Expanded  : abcdefghijklmnopqrstuvwxyz-
Unexpanded: z-a-
Expanded  : z-a-
Unexpanded: -1-6-
Expanded  : -123456-
Unexpanded: a-ee-a
Expanded  : abcdee-a
Unexpanded: a-R-L
Expanded  : a-R-L
Unexpanded: 1-9-1
Expanded  : 123456789-1
Unexpanded: 5-5
Expanded  : 5
                                                  */