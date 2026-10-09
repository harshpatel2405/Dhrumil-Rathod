#include <stdio.h>

int main()
{
    int n = 11;
    int count = 0;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    printf("Number of Factors of %d are %d", n, count);
    return 0;
}