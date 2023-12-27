#include <stdio.h>

int main()
{

    char grade;

    printf("Enter a letter Grade: ");
    scanf("%c", &grade);

    switch (grade)
    {
    case 'A':
        printf("Perfect\n");
        break;

    case 'B':
        printf("You did good!\n");
        break;

    case 'C':
        printf("You did ok!\n");
        break;

    case 'D':
        printf("At least it's not an F.\n");
        break;

    case 'F':
        printf("YOU FAILED YOUR LOSER.\n");
        break;

    default:
        printf("Please enter only valid grades.");
    }

    return 0;
}