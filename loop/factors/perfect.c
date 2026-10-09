#include <stdio.h>

// * 28 -> 1 + 2 + 4 + 7 + 14  = 28
// * 6  -> 1 + 2 + 3           =  6

int main()
{
    int n = 28;
    int sum = 0;

    printf("Factors of %d (excluding number itself) : ", n);
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            printf("%d   ", i);
            sum += i;
        }
    }

    printf("\nSum  (excluding number itself) : %d\n", sum);

    if (sum == n)
    {
        printf("%d is perfect number", n);
    }
    else
    {
        printf("%d is not perfect number", n);
    }
    return 0;
}