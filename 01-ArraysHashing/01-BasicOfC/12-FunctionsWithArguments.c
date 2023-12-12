#include <stdio.h>

void greetings(char name[], int age)
{
    printf("\nHello %s, Nice to meet you!", name);
    printf("\nYou are %d years old.", age);
}

int main()
{

    char name[] = "Caue";
    int age = 19;

    greetings(name, age);

    return 0;
}