#include <stdio.h>

// multiplication table of 5
// n   i = n * i
// 5 * 1 = 5
// 5 * 2 = 10
// 5 * 3 = 15
// 5 * 4 = 20

int main()
{
    int n, i;

    printf("Enter a number : ");
    scanf("%d", &n);

    for (i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", n, i, n * i);
    }
    return 0;
}