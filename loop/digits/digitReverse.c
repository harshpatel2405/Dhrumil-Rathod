#include <stdio.h>

int main()
{
    int n = 12321;
    int rev = 0;
    int temp = n;

    while (n > 0)
    {
        int rem = n % 10;

        rev = rev * 10 + rem;

        n /= 10;
    }

    printf("Original : %d\n", temp);
    printf("Reverse : %d\n", rev);

    if (temp == rev)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not palindrome");
    }
    return 0;
}
// check if original number is same as reverse number ...