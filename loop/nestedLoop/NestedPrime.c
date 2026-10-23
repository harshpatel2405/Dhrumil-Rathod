#include <stdio.h>

// * find how many numbers are prime between 1 and 1000

int main()
{
    int start, end;
    int count = 0;

    printf("Enter start and end position : ");
    scanf("%d%d", &start, &end);
    for (int j = start; j <= end; j++)
    {
        int n = j;
        int i;
        for (i = 2; i < n; i++)
        {
            count++;
            if (n % i == 0)
            {
                break;
            }
        }

        if (i == n)
        {
            printf("%d\t", n);
        }
    }

    printf("\nCount : %d", count);
    return 0;
}