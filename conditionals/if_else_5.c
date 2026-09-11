#include <stdio.h>

int main()
{
    // int dayspresent = 'a'; // * allowed
    int dayspresent = 11; 
    int workingDays = 100;

    int attendance = (float) dayspresent / workingDays * 100;

    if (attendance < 0 || attendance > 100)
    {
        printf("Enter correct data ... ");
    }
    else if (attendance >= 90)
    {
        printf("Excellent");
    }
    else if (attendance >= 75 && attendance <= 89)
    {
        printf("Good");
    }
    else if (attendance >= 50 && attendance <= 74)
    {
        printf("Average");
    }
    else
    {
        printf("Poor");
    }

    return 0;
}