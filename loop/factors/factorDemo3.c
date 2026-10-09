#include <stdio.h>

int main()
{
    int n = 11;
    int sum = 0;

    printf("Factors of %d : ", n);
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("%d   ", i);
            sum += i;
        }
    }

    printf("\nSum : %d", sum);

    return 0;
}