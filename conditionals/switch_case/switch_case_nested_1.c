/*
 * Country -- INDIA , USA , UK
 *            INDIA -- Gujarat , Maharashtra ,Goa
 *            USA   -- New York , Washington DC , NEw Jersey
 *            UK    -- London , Manchester
 */

#include <stdio.h>

int main()
{
    int country;
    int state;
    printf("1. INDIA\t2. USA\t3. UK\nSelect Your Country : ");
    scanf("%d", &country);

    switch (country)
    {
    case 1:
        printf("1. Maharashtra\t2. Gujarat\t3. Goa\nSelect Your State : ");
        scanf("%d", &state);

        switch (state)
        {
        case 1:
            printf("INDIA - Maharashtra");
            break;
        case 2:
            printf("INDIA - Gujarat");
            break;
        case 3:
            printf("INDIA - Goa");
            break;
        default:
            printf("INDIA - UNKNOWN");
        }

        break;
    case 2:
        printf("1. New York\t2. Washington DC\t3. New Jersey\nSelect Your State : ");
        scanf("%d", &state);

        switch (state)
        {
        case 1:
            printf("USA - New York");
            break;
        case 2:
            printf("USA - Washington DC");
            break;
        case 3:
            printf("USA - New Jersey");
            break;
        default:
            printf("USA - UNKNOWN");
        }
        break;
    case 3:
        printf("1. London\t2. Manchester\nSelect Your State : ");
        scanf("%d", &state);

        switch (state)
        {
        case 1:
            printf("UK - London");
            break;
        case 2:
            printf("UK - Manchester");
            break;
        default:
            printf("UK - UNKNOWN");
        }
        break;
    default:
        printf("Select Correct Country");
    }

    return 0;
}