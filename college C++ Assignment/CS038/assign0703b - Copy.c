#include <stdio.h>
#include <string.h>
/*Problem statement:The program will accept some names 
    from the user as input & then sorts them in an alphabetical
     order using string operation.*/
void main()
{

    char name[10][8], tname[10][8], temp[8];
    int i, j, n;

    printf("Enter the value of n \n");
    scanf("%d", &n);
    printf("Enter %d names n \n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%s", name[i]);
        strcpy(tname[i], name[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (strcmp(name[i], name[j]) > 0)
            {
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }

    printf("\n----------------------------------------\n");
    printf("Input NamestSorted names\n");
    printf("------------------------------------------\n");

    for (i = 0; i < n; i++)
    {
        printf("%s\t\t%s\n", tname[i], name[i]);
    }

    printf("------------------------------------------\n");
}
/*
Output:-
Enter the value of n 
8
Enter 8 names n 
tushar
sonu
manish
rishi
golu
nitish
raj  
satyam

----------------------------------------
Input NamestSorted names
------------------------------------------
tushar          golu
sonu            manish
manish          nitish
rishi           raj
golu            rishi
nitish          satyam
raj             sonu
satyam          tushar

Algorithm:-
1.start
2. Create a 2D character array to store names of some fixed size.
3. Take names as input from users using for loop.
4. Now, sort this array of names using Selection sort.
5. Make a nested for loop, where the upper loop extracts each name 
and inner loop compares this name by the rest of the names below it.
6. After executing both the loops, rearranging all the names, finally an 
array of alphabetically sorted array will be obtained.
7.End                                                              */