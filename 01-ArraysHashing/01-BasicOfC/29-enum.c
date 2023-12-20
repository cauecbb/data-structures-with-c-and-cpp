#include <stdio.h>

// enum just help to make the program more readable

enum Day
{
    Sun = 1,
    Mon = 2,
    Tue = 3,
    Wed = 4,
    Thu = 5,
    Fri = 6,
    Sat = 7
};

int main()
{

    enum Day today = Tue;

    if (today == 1 || today == 7)
    {
        printf("It's weekend!!");
    }
    else
    {
        printf("You have to work.");
    }

    return 0;
}