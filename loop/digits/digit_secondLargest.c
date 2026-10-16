#include <stdio.h>

int main()
{
    int n = 18967;
    int largest = -1;
    int secondLargest = -1;

    while (n > 0)
    {
        int rem = n % 10;

        if (largest < rem)
        {
            secondLargest = largest;
            largest = rem;
        }
        else if (rem > secondLargest && rem != largest)
        {
            secondLargest = rem;
        }
        n /= 10;
    }

    printf("Largest : %d\n", largest);
    printf("Second Largest : %d\n", secondLargest);

    return 0;
}