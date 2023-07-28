/*Assignment-01
Take input as 14072022 and the print the output 14 July,2022 */
#include <stdio.h>
int main()
{
    int n, date, month, year;
    printf("enter n\n");
    scanf("%d", &n);
    date = n / 1000000;
    month = n / 10000;
    month = month % 100;
    printf("%d ", date);
    if (month == 1)
        printf("Janauary,");
    else if (month == 2)
        printf("february,");
    else if (month == 3)
        printf("March,");
    else if (month == 4)
        printf("April,");
    else if (month == 5)
        printf("May,");
    else if (month == 6)
        printf("June,");
    else if (month == 7)
        printf("July,");
    else if (month == 8)
        printf("August,");
    else if (month == 9)
        printf("September,");
    else if (month == 10)
        printf("October,");
    else if (month == 11)
        printf("November,");
    else if (month == 12)
        printf("December,");
    year = n % 10000;
    printf("%d\n", year);
    return 0;
}