#include <stdio.h>

int main()
{
    int choice;
    int a, b;
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\nSelect Your Choice : ");
    scanf("%d", &choice);

    printf("Enter Two Numbers : ");
    scanf("%d%d", &a, &b);

    switch (choice)
    {
    case 1:
        printf("Addition : %d + %d = %d", a, b, a + b);
        break;
    case 2:
        printf("Subtraction : %d - %d = %d", a, b, a - b);
        break;
    case 3:
        printf("Multiplication : %d * %d = %d", a, b, a * b);
        break;
    case 4:
        printf("Division : %d / %d = %d", a, b, a / b);
        break;
    default:
        printf("Select Correct Values between 1 and 4");
    }
    return 0;
}