#include <stdio.h>
#include <string.h>

int main()
{
    char name[25];
    int age;

    printf("\nWhat's your name? ");
    // scanf("%s", &name); scanf doesnt read any spaces
    fgets(name, 25, stdin); // fgets reads blank spaces
    name[strlen(name) - 1] = '\0';

    printf("\nHow old are you? ");
    scanf("%d", &age);
    printf("Your name is %s and you are %d years old.", name, age);

    return 0;
}