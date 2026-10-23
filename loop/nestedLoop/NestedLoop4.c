#include <stdio.h>

/*
upper Pyramid
n = 4

^                     n - i
   *     -- 3 space   4 - 1
  * *    -- 2 space   4 - 2
 * * *   -- 1 space   4 - 3
* * * *  -- 0 space   4 - 4
*/

int main()
{
    int i, j;
    int n = 7;
    for (i = 1; i <= n; i++)
    {
        // space
        for (int k = 1; k <= (n - i); k++)
        {
            // printf(""); // left aligned
            printf(" "); // upper pyramid
            // printf("  "); // Right Pyramid
        }

        // stars
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    printf("\n");
    for (i = n; i >= 1; i--)
    {
        // space
        for (int k = 1; k <= (n - i); k++)
        {
            // printf(""); // left aligned
            printf(" "); // upper pyramid
            // printf("  "); // Right Pyramid
        }

        // stars
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}