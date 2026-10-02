#include <stdio.h>

int main()
{
    // * multiply of 1 to 10
    int i;
    int multiply = 1; // garbage value

    int n;

    printf("Enter a number : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        // printf("multiply = %d * %d = %d\n", multiply, i, multiply * i);
        multiply = multiply * i;
    }

    printf("multiplication of 1 to %d is : %d", n, multiply);

    return 0;
}
