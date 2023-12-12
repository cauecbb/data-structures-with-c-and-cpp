#include <stdio.h>
#include <stdbool.h>

int main()
{

    // AND = && - checks if two conditions are true

    float temp = 100;

    if (temp >= 0 && temp <= 30)
    {
        printf("\nThe weather is good.");
    }
    else
    {
        printf("\nThe weather is bad.");
    }

    // OR = || - checks if at least one condition is true

    float temp1 = -100;

    if (temp <= 0 || temp1 >= 30)
    {
        printf("\nThe weather is bad.");
    }
    else
    {
        printf("\nThe weather is good.");
    }

    // NOT = ! - reverses the state of a condition

    bool sunny = true;

    if (!sunny)
    {
        printf("\nThe weather is bad.");
    }
    else
    {
        printf("\nThe weather is good.");
    }

    return 0;
}