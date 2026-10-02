#include <stdio.h>

int main()
{
    // * sum odd and elements from the loop
    int i;
    int sumO = 0, sumE = 0;

    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 != 0)
        {
            sumO += i;
        }
        else
        {
            sumE += i;
        }
    }

    printf("Even Sum : %d\n", sumE);
    printf("Odd Sum : %d\n", sumO);
    return 0;
}