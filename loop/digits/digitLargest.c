#include <stdio.h>

int main()
{
    int n = 125843;
    int max = n % 10;

    while (n > 0)
    {
        int rem = n % 10;

        if (max < rem)
        {
            max = rem;
        }

        n /= 10;
    }

    printf("Max : %d", max);

    return 0;
} 

// task : find sum and multiplication of largest and smallest digit 
// task : check whether largest and smallest digit are odd or even