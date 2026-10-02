#include <stdio.h>

int main()
{
    int age;

    printf("Enter age : ");
    scanf("%d", &age);

    // (condition) ? true : false ;
    (age > 18) ? printf("You can vote...") : printf("You Cannot Vote");

    int a = 100 , b = 20;

    int ans = (a > b) ? a : b;
    printf("\nAns : %d", ans);


    int isPresent = 0;

    printf("\nIs Yash Present : %s", (isPresent == 1) ? "YES": "NO");
    return 0;
}