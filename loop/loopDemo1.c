#include <stdio.h>

int main()
{
    int i;

    // print 1 to 10
    for (i = 1; i <= 10; i++)
    {
        printf("%d\t", i);
    }
    printf("\n");

    i = 1;
    while (i <= 10)
    {
        printf("%d\t", i);
        i++;
    }
    printf("\n");

    i = 1;
    do
    {
        printf("%d\t", i);
        i++;
    } while (i <= 10);
    return 0;
}
/*
i = 1 -> 1 <= 4 -> print 1 -> i++ => i = 2
i = 2 -> 2 <= 4 -> print 2 -> i++ => i = 3
i = 3 -> 3 <= 4 -> print 3 -> i++ => i = 4
i = 4 -> 4 <= 4 -> print 4 -> i++ => i = 5
i = 5 -> 5 <= 4

*/