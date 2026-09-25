#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number : ");
    scanf("%d", &n);

    switch (n % 2 == 0)
    {
    case 1:
        printf("%d is even", n);
        break;
    case 0:
        printf("%d is odd", n);
        break;
    }
    return 0;
}