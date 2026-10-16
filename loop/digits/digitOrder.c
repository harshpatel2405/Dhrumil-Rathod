#include <stdio.h>

int main()
{
    int n = 1234;

    while (n > 0)
    {
        int rem = n % 10;

        n /= 10;
    }

    return 0;
}