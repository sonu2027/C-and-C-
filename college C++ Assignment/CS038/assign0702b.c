#include <stdio.h>

int main(void) {
  // creating a FILE variable
  FILE *fptr;
  
  // integer variable
  int num;
  
  // open the file in write mode
  fptr = fopen("integers", "w");
  
  if (fptr != NULL) {
    printf("File created successfully!\n");
  }
  else {
    printf("Failed to create the file.\n");
    // exit status for OS that an error occurred
    return -1;
  }
  
  // enter integer numbers
  printf("Enter some integer numbers [Enter -1 to exit]: ");
  while (1) {
    scanf("%d", &num);
    if (num != -1) {
      putw(num, fptr);
    }
    else {
      break;
    }
  }
  
  // close connection
  fclose(fptr);
  
  // open file for reading
  fptr = fopen("integers", "r");
  
  // display numbers
  printf("\nNumbers:\n");
  while ( (num = getw(fptr)) != EOF ) {
    printf("%d\n", num);
  }
  
  printf("\nEnd of file.\n");
  
  // close connection
  fclose(fptr);
  
  return 0;
}
/*
Output:-
File created successfully!
Enter some integer numbers [Enter -1 to exit]:  1 2 3 4 -1      

Numbers:
1
2
3
4

End of file.
Algorithm:-
1.Creating a file variable fptr
2.read num
3.open the file in write mode
  fptr = fopen("integers", "w")
4.if ftr!=null
      print file creatd sucessfully
  else                                                          
      print failed to create the file.
5.return -1
6.enter integer number using while loop.
7. close connection
  fclose(fptr)
8.open file for reading
9.display numbers
   print number
10.close connection
11.End
                                               */