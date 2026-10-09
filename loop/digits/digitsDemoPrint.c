#include <stdio.h>

int main()
{
    int n = 8765;

    while(n > 0)
    {
        int rem = n % 10;
        printf("%d\t", rem);
        n /= 10;
    }
    return 0;
}