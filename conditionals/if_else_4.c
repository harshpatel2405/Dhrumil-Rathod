// Input marks and print grades:
// 	≥90 → Grade A
// 	75–89 → Grade B
// 	50–74 → Grade C
// 	<50 → Grade D

#include <stdio.h>

int main()
{
    int marks = 980;

    if (marks < 0 || marks > 100)
    {
        printf("Marks should be between 0 and 100");
    }
    else if (marks >= 90)
    {
        printf("Grade : A");
    }
    else if (marks >= 75 && marks <= 89)
    {
        printf("Grade : B");
    }
    else if (marks >= 50 && marks <= 74)
    {
        printf("Grade : C");
    }
    else
    {
        printf("Grade : D");
    }

    return 0;
}
