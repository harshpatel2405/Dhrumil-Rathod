#include <stdio.h>

int main()
{
    int choice;
    int amount;
    int balance = 90000;
    start:
    printf("1. Deposit\n2. Withdraw\n3. Check Balance\n4. Exit\nSelect Your operation : ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Enter amount to be depositted : ");
        scanf("%d", &amount);

        balance = balance + amount;
        printf("Amount added Successfully...\n\n");
        goto start;
        break;

    case 2:
        printf("Enter amount to be withdraw : ");
        scanf("%d", &amount);

        if (amount > 0 && amount <= balance)
        {
            balance = balance - amount;
            printf("Amount Withdrawn Successfully...\n\n");
        }
        else
        {
            printf("Enter a valid amount\n\n");
        }
        goto start;
        break;

    case 3:
        printf("Current Balance in Account : %d\n\n", balance);
        goto start;
        break;
    case 4:
        printf("Thank you for banking with us..Have a great day...\n\n");
        break;

    default:
        printf("Select Correct Operation...\n\n");
        goto start;
    }

    return 0;
}