#include <stdio.h>
void main()
{
    auto int x = 10;
    {
        auto int x = 12;
        {
            auto int x = 15;

            printf("value of x=%d\n", x);
        }

            printf("value of x=%d\n", x);
        }
        printf("value of x=%d\n", x);
    }
