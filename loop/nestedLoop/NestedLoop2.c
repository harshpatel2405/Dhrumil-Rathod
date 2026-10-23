#include <stdio.h>

int main()
{
    int i, j;

    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            // printf("%d ", j);
            printf("%d ", i);
        }
        printf("\n");
    }
    printf("\n");
    printf("\n");

    // * SQUARE
    int ROW =4;
    int COLUMN = 4;
    for (i = 1; i <= ROW; i++)
    {
        for (j = 1; j <= COLUMN; j++)
        {
            printf("* ");
            // printf("%d ", j);
            // printf("%d ", i);
        }
        printf("\n");
    }
    printf("\n");
    printf("\n");

    // * LEFT ALIGNED RIGHT ANGLE TRIANGLE
    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
            // printf("%d ", j);
            // printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}
