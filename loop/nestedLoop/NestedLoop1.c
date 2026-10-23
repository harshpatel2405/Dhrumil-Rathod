#include <stdio.h>

int main()
{
    int i, j;

    for (i = 1; i <= 4; i++)
    {
        printf("I - %d\tJ - ", i);
        for (j = 1; j <= 3; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}