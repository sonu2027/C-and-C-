#include <stdio.h>
#include <stdlib.h>

int main() {
    char sentence[1000];

    // creating file pointer to work with files
    FILE *fptr;

    // opening file in writing mode
    fptr = fopen("program.txt", "w");

    // exiting program 
    if (fptr == NULL) {
        printf("Error!");
        exit(1);
    }
    printf("Enter a sentence:\n");
    fgets(sentence, sizeof(sentence), stdin);
    fprintf(fptr, "%s", sentence);
    fclose(fptr);
    return 0;
}
/*
Output:-
Enter a sentence:
I am sonu.
Here, a file named program.txt is created. The file 
will contain I am sonu.1
Agorithm:-
1.Start
2.Take character sentence upto 100
3.create file pointer
4.open the files in writing mode
5.exit program
6.fprintf fptr
7.End
                                                   */