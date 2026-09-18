#include <stdio.h>

/*
Enter triangle angles a, b, c:
    If valid (a + b + c = 180), check:
        All equal → Equilateral
        Any two equal → Isosceles
        All different → Scalene
        Else → Not a triangle
*/

int main()
{
    int a, b, c;
    printf("Enter a , b and c : ");
    scanf("%d%d%d", &a, &b, &c);

    if (a + b + c == 180)
    {
        if (a == b && b == c && c == a)
        {
            printf("Equilateral");
        }
        else if (a == b || b == c || c == a)
        {
            printf("Isoscles");
        }
        else if (a != b && b != c && c != a)
        {
            printf("Scalene");
        }
    }
    else
    {
        printf("Total is greater or less than 180");
    }
    return 0;
}