#include <stdio.h>

int main()
{
    // * sum of 1 to 10
    int i;
    int sum = 0; // garbage value

    int n;

    printf("Enter a number : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        // printf("Sum = %d + %d = %d\n", sum, i, sum + i);
        sum = sum + i;
        //  newValue = oldValue + i
    }

    printf("Sum of 1 to %d is : %d", n, sum);

    return 0;
}
