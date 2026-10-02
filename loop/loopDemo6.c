#include <stdio.h>

int main()
{
    // * print odd and elements from the loop
    int i;
    printf("ODD - ");
    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d  ", i);
        }
    }
    printf("\nEVEN - ");
    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d  ", i);
        }
    }
    return 0;
}