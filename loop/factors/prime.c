#include <stdio.h>

// * prime -- number having exactly two factors

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
    printf("Number of Factors of %d are %d\n", n, count);

    if (count == 2)
    {
        printf("%d is prime number", n);
    }
    else
    {
        printf("%d is not prime number", n);
    }
    return 0;
}

/*
#include <stdio.h>

int main()
{
    int n = 13;
    int i;
    int isPrime = 1;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)   
        {
            isPrime = 0;
            break;
        }
    }

    if (isPrime == 1)
    {
        printf("%d is prime number", n);
    }
    else
    {
        printf("%d is not prime number", n);
    }
    return 0;
}
*/