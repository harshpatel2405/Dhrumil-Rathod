/*
* Question 15 — Autonomous Vehicle Fleet Diagnostic and Maintenance Scheduling Hub
* Problem Statement: Create a diagnostic and maintenance scheduling hub for an autonomous electric vehicle fleet management platform. The system must route fault codes through vehicle powertrain models, diagnostic severity sub-menus, and automated technician dispatch priority rules.
* Requirements:
& 1. Main Menu: Powertrain Architecture (1: BEV, 2: PHEV, 3: HFCV).
& 2. Sub-Menu (Nested Switch): System Fault Category (1: Battery Thermal, 2: Motor Inverter, 3: Sensor Array).
& 3. Severity Assessment Tier: Error severity code (1: Minor, 2: Degraded, 3: Critical Failure).
& 4. Corrective Action & Dispatch Routing: Determine recommended shop action and technician priority code using switch cases.
& 5. Safety Override Validation (if-else): If the vehicle reports a Critical System Failure in either the Battery or Sensor Array, automatically trigger an immediate remote vehicle immobilization command alongside high-priority emergency technician dispatch.

* Inputs: Powertrain type choice, fault category choice, severity code, active operational mileage input.
* Validation: Severity codes must be between 1 and 3. Invalid inputs must trigger default exception handlers.
* Expected Behavior for Invalid Choices: Output "Error: Unrecognized System Fault Code or Powertrain Type" and cancel dispatch order.

p1 - high
p2- mid
p3- low
 */

#include <stdio.h>

int main()
{
    int pa;
    int sfc;
    int esc;
    int aom;

    printf("Powertrain Architecture (1: BEV, 2: PHEV, 3: HFCV)\nSelect Suitable Architecture : ");
    scanf("%d", &pa);

    switch (pa)
    {
    case 1:
        printf("System Fault Category (1: Battery Thermal, 2: Motor Inverter, 3: Sensor Array)\nSelect Fault Category : ");
        scanf("%d", &sfc);

        switch (sfc)
        {
        case 1:
            printf("Error severity code (1: Minor, 2: Degraded, 3: Critical Failure).\nSelect Error Code : ");
            scanf("%d", &esc);

            printf("Enter Active Operational Mileage : ");
            scanf("%d", &aom);

            switch (esc)
            {
            case 1:
                printf("Severity : Minor\n");
                printf("Action : Schedule Routine Inspection\n");
                if (aom >= 10000)
                {
                    printf("Technician Priority P2 - Medium Priority\n");
                }
                else
                {
                    printf("Technician Priority P3 - Normal Maintenance\n");
                }
                break;
            case 2:
                printf("Severity : Degraded\n");
                printf("Action : Schedule Inspection within 12 hours\n");
                if (aom >= 10000)
                {
                    printf("Technician Priority P1: High Priority");
                }
                else
                {
                    printf("Technician Priority P2 - Medium Priority\n");
                }
                break;

            case 3:
                printf("Severity : Critical Failure\n");
                printf("Action : Stop any other operations\n");
                if (aom >= 10000)
                {
                    printf("Technician Priority P0: Emergency");
                }
                else
                {
                    printf("Technician Priority P1 - High Priority\n");
                }
                break;

            default:
                break;
            }
            break;
        case 2:
            break;
        case 3:
            break;
        default:
            break;
        }

        break;
    case 2:
        printf("System Fault Category (1: Battery Thermal, 2: Motor Inverter, 3: Sensor Array)\nSelect Fault Category : ");
        scanf("%d", &sfc);

        switch (sfc)
        {
        case 1:
            printf("Error severity code (1: Minor, 2: Degraded, 3: Critical Failure).\nSelect Error Code : ");
            scanf("%d", &esc);

            printf("Enter Active Operational Mileage : ");
            scanf("%d", &aom);

            switch (esc)
            {
            case 1:
                printf("Severity : Minor\n");
                printf("Action : Schedule Routine Inspection\n");
                if (aom >= 10000)
                {
                    printf("Technician Priority P2 - Medium Priority\n");
                }
                else
                {
                    printf("Technician Priority P3 - Normal Maintenance\n");
                }
                break;
            case 2:
                printf("Severity : Degraded\n");
                printf("Action : Schedule Inspection within 12 hours\n");
                if (aom >= 10000)
                {
                    printf("Technician Priority P1: High Priority");
                }
                else
                {
                    printf("Technician Priority P2 - Medium Priority\n");
                }
                break;

            case 3:
                printf("Severity : Critical Failure\n");
                printf("Action : Stop any other operations\n");
                if (aom >= 10000)
                {
                    printf("Technician Priority P0: Emergency");
                }
                else
                {
                    printf("Technician Priority P1 - High Priority\n");
                }
                break;

            default:
                break;
            }
            break;
        case 2:
            break;
        case 3:
            break;
        default:
            break;
        }

        break;
    case 3:
        printf("System Fault Category (1: Battery Thermal, 2: Motor Inverter, 3: Sensor Array)\nSelect Fault Category : ");
        scanf("%d", &sfc);

        switch (sfc)
        {
        case 1:
            printf("Error severity code (1: Minor, 2: Degraded, 3: Critical Failure).\nSelect Error Code : ");
            scanf("%d", &esc);

            printf("Enter Active Operational Mileage : ");
            scanf("%d", &aom);

            switch (esc)
            {
            case 1:
                printf("Severity : Minor\n");
                printf("Action : Schedule Routine Inspection\n");
                if (aom >= 10000)
                {
                    printf("Technician Priority P2 - Medium Priority\n");
                }
                else
                {
                    printf("Technician Priority P3 - Normal Maintenance\n");
                }
                break;
            case 2:
                printf("Severity : Degraded\n");
                printf("Action : Schedule Inspection within 12 hours\n");
                if (aom >= 10000)
                {
                    printf("Technician Priority P1: High Priority");
                }
                else
                {
                    printf("Technician Priority P2 - Medium Priority\n");
                }
                break;

            case 3:
                printf("Severity : Critical Failure\n");
                printf("Action : Stop any other operations\n");
                if (aom >= 10000)
                {
                    printf("Technician Priority P0: Emergency");
                }
                else
                {
                    printf("Technician Priority P1 - High Priority\n");
                }
                break;

            default:
                break;
            }
            break;
        case 2:
            break;
        case 3:
            break;
        default:
            break;
        }

        break;
    default:
        printf("System Fault Category (1: Battery Thermal, 2: Motor Inverter, 3: Sensor Array)\nSelect Fault Category : ");
        scanf("%d", &sfc);

        switch (sfc)
        {
        case 1:
            printf("Error severity code (1: Minor, 2: Degraded, 3: Critical Failure).\nSelect Error Code : ");
            scanf("%d", &esc);

            printf("Enter Active Operational Mileage : ");
            scanf("%d", &aom);

            switch (esc)
            {
            case 1:
                printf("Severity : Minor\n");
                printf("Action : Schedule Routine Inspection\n");
                if (aom >= 10000)
                {
                    printf("Technician Priority P2 - Medium Priority\n");
                }
                else
                {
                    printf("Technician Priority P3 - Normal Maintenance\n");
                }
                break;
            case 2:
                printf("Severity : Degraded\n");
                printf("Action : Schedule Inspection within 12 hours\n");
                if (aom >= 10000)
                {
                    printf("Technician Priority P1: High Priority");
                }
                else
                {
                    printf("Technician Priority P2 - Medium Priority\n");
                }
                break;

            case 3:
                printf("Severity : Critical Failure\n");
                printf("Action : Stop any other operations\n");
                if (aom >= 10000)
                {
                    printf("Technician Priority P0: Emergency");
                }
                else
                {
                    printf("Technician Priority P1 - High Priority\n");
                }
                break;

            default:
                break;
            }
            break;
        case 2:
            break;
        case 3:
            break;
        default:
            break;
        }

        break;
    }

    return 0;
}