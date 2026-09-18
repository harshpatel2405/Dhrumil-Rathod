#include <stdio.h>

int main()
{
    int age;
    printf("Enter age : ");
    scanf("%d",&age);

    if(age >= 18)
    {
        if(age >= 60)
        {
            printf("Senior Citizen Voter..");
        }
        else
        {
            printf("Regular Voter...");
        }
    }
    else
    {
        printf("You cannot vote..");
    }
    return 0;
}