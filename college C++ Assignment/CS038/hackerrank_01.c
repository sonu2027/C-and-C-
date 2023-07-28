//if a,b is taken as input for example 2,8 then it will print
//two,three and so on upto eight but if a is less than nine and 
//b is greater than nine then it will print number upto ninne 
//and after that it will print even or odd upto b.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a, b;
    char* represent[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
   printf("enter the value of a and b\n");
    scanf("%d\n%d", &a, &b);
    for(int i = a; i <= b; i++) {
        
        if(i > 9) {
            if(i % 2 == 0)
                printf("even\n");
            else printf("odd\n");
        }
        else {
            printf("%s\n", represent[i]);
        }
    }
    return 0;
}
