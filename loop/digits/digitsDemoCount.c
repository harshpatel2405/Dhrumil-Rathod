#include <stdio.h>

int main()
{
    int n = 543638, count = 0;

    while (n > 0)
    {
        count++;
        n = n / 10;
        // n /= 10;
        // 1234 / 10 = 123
        // 123 / 10 = 12
        // 12 / 10 = 1
        // 1 / 10 = 0
    }

    printf("Count : %d", count);

    return 0;
}

/*
 * for(; n > 0 ;)
 * {
 * }
 */